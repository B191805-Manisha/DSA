#include<stdio.h>
#define  MAX 5
int top=-1;
int s[MAX];
   
 void push(int ele)
 {
    if(top==MAX-1)
      printf("\nstack over flow");
    else
      s[++top]=ele;  
 }
 
 int pop()
 {

  if(top==-1)
   printf("\n stack under flow");
  else
   printf("%d ",s[top--]);
 
 }

int main()
{
int i,val;
printf("enter elements");
for(i=0;i<MAX;i++)
{
   scanf("%d",&val);
   push(val);
}
for(i=0;i<MAX;i++)
 printf("%d ",s[i]);
 
 printf("after poping\n");
 
for(i=0;i<MAX+1;i++)
  pop();



}

