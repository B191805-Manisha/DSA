#include<stdio.h>
#define max 30
#include<ctype.h>

char stack[max];
int top=-1;

void push(int val)
 {
  if(top>=max-1)
  {
    printf("stack overflow\n");
    return;
   }
   else
    stack[++top]=val;
  }

char pop()
{
  if(top==-1)
  {printf("stack under flow\n");
  return 0;
  }
  else
   return stack[top--];
}


int getpriority(char ch)
{
  if(ch=='*'||ch=='/')
  return 2;
  else if(ch=='+'||ch=='-')
  return 1;
  else
  return 0;
}

 void infix_postfix(char exp[])
 {
 for(int i=0;exp[i]!='\0';i++)
  {if(isalnum(exp[i]))
   printf("%c",exp[i]);
   
   else if(exp[i]=='(')
    push(exp[i]);
   else if(exp[i]==')')
   {
      while(stack[top]!='(')
      {
       printf("%c",pop()); 
      }
      pop();
   }  
     
  else
  {
  while(getpriority(stack[top])>=getpriority(exp[i]))
    printf("%c",pop());
  push(exp[i]);
    }}
 
 while(top>=0)
  printf("%c",pop());  

 }

int main()
{
 char exp[80];
 printf("enter the infix expression\n");
 scanf("%s",exp);
 infix_postfix(exp);

return 0;
}










