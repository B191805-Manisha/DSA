#include<stdio.h>
#include<ctype.h>
#define N 100
char stack[N];
int top=-1;

void push(val)
{
if(top>=N-1)
printf("stack overflows");
else
stack[top++]=val;

}
char pop(){

if(top==-1)
printf("stack underflows");
else
return stack[top];
}

int getpre(ch)

{
if(ch==('+'||'-'))
return 1;
else if(ch==('*'||'/'))
return 2;
else
return 0;
}
void infix(exp){

	int i;
for(i=0;i!='\0';i++)
  {
	if(isalnum(exp[i]))
    	printf("%c",exp[i]);
	else if(exp[i]=='(' )
	push();
	else if(exp[i]==')' )
	{
	while(stack[top]!='(')
	printf("%c",pop());
	pop();
	}
	else{
	
	while((getpre(exp[i]))<=(getpre(stack[top])))
	printf("%c",pop());
	push();
	
	
	}
  }
  while(top>=0)
 	printf("%c",pop());
}
int main()
{ char string[10];
printf("enter the expression");
scanf("%s",string);
infix(string);
return 0;
}
