#include<stdio.h>

#define max 50

int stack[max];
int top=-1;

void push(val)
{
  if(top>=max-1)
   {printf("stack overflow");
   return ;
   }
   else
   stack[++top]=val;
}

int pop()
{
 if(top==-1)
{ printf("stack underflow\n");
 return 0;}
 else
 return stack[top--];

}


int postfix_eval(char exp[])
{
   int i,a,b,result;
   for(i=0;exp[i]!='\0';i++)
   {
     if(isdigit(exp[i]))
       push(exp[i]-'0');
     else
     {
       a=pop();
       b=pop();
       switch(exp[i])
       {
         case '+': result=a+b; break;
         case '-': result=b-a; break;
         case '*': result=b*a; break;
         case '/': result=b/a; break;              
        }
        push(result);
      }  
   } 

   return result;
}



int main()
{
 char exp[20];
 printf("\nenter the postfix expression to evaluate \n");
 scanf("%s",exp);
 int k;
 k=postfix_eval(exp);
 printf("\nresult of postfix evaluation is = %d",k);
 
}
























