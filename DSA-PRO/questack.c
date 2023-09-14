#include<stdio.h>

#define n 3

int s1[n],s2[n];
int top1=-1,top2=-1;
int count=0;

void push1(int val)
{
  if(top1==n-1)
    printf("queue overflow\n");
  else
    s1[++top1]=val;
}
void push2(int val)
{
if(top2==n-1)
printf("queue overflow\n");
 else
 {
   s2[++top2]=val;
 } 
}
int pop1()
{
  return s1[top1--];
}
int pop2()
{
  return s2[top2--];
}

void enque(int val)
{
  push1(val);
  count++;
}

void deque()
{ int i;
printf("\n");
  if(top1<0&&top2<0)
  printf("queue underflow\n");
  
  else
  {
  for(i=0;i<count;i++)
     push2(pop1());
   
   printf(" %d ",pop2());
   count--;
   for(i=0;i<count;i++)
      push1(pop2());
     
  }
}
void display()
{
 int i;
 for(i=0;i<=top1;i++)
   printf("%d\t",s1[i]);
  
}
int main()
{
  enque(12);
  enque(1);
  enque(67);
  enque(123);
  printf("\n");
  display();
  deque();
  deque();
  deque();
  deque();
  deque();
}




