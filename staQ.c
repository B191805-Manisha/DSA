#include<stdio.h>
#define n 5
int q1[n],q2[n];
int f1=-1,f2=-1,r1=-1,r2=-1;
void enq1(int val)
{
  if(r1==n-1)
 { printf("stack overflow"); return ;}
  else if(f1==-1&&r1==-1)
  f1=r1=0;
  else
   r1=r1+1;
 q1[r1]=val;  
}
void enq2(int val)
{
  if(r2==n-1)
  {printf("stack overflow"); return ;}
  else if(f2==-1&&r2==-1)
  f2=r2=0;
  else
   r2=r2+1;
 q2[r2]=val;  
}

int deq1()
{
  int d;
  if(f1==-1||r1==-1)
 { printf("stack empty"); return 0;
 }
 else if(f1==r1)
 {
   d=q1[f1];
   f1=r1=-1;
   return d;
 }
 else
 {
d= q1[f1++];
 return d;
 }
}
int deq2()
{
  int d;
  if(f2==-1||r2==-1)
 { printf("stack empty"); return 0;
 }
 else if(f2==r2)
 {
   d=q2[f2];
   f2=r2=-1;
   return d;
 }
 else
 {
d= q2[f2++];
 return d;
 }
}

int pop()
{
  return deq1();
  
}
void push(int val)
{
 while(f1!=-1 &&f1<=r1)
   enq2(deq1());
 enq1(val);
 while(f2!=-1 && f2<=r2) 
  enq1(deq2()); 
  
}

int main()
{
  push(1);
  push(2);
  push(3);
  push(4);
  push(3);
  printf("%d ",pop());
  printf("%d ",pop());
  printf("%d ",pop());
  return 0;
}













