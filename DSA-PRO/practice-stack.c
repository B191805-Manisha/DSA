#include<stdio.h>
#include<stdlib.h>
#define max 7
/*int top=-1;
int stack[max];

void push(int val)
{
  if(top>=max)
  {
   printf("stack is full");
   return;
  }
  else
  stack[++top]=val;
}

int pop()
{
  if(top<0)
  {
    printf("stack underflow");
    return 0;
  }
  else
  return stack[top--];
}

  void display()
  {
    int i;
    for(i=top;i>=0;i--)
    printf("%d ",stack[i]);
  }
  
  int main()
  {
    int i,val;
    for(i=0;i<max;i++)
    {
     scanf("%d",&val);
     push(val);
     }
     display();
     printf("\n");
     printf("%d ",pop());
     printf("%d \n",pop());
     display();
      printf("\n");
     push(190);
     push(520);
     display();
     return 0;
  }
  
  struct node
  {
   struct node *next;
   int data;
  };
  struct node*top=NULL;
  
  struct node *cn(int val)
  {
    struct node*nn=(struct node*)malloc(sizeof(struct node));
    nn->data=val;
    nn->next=NULL;
    return nn;
  }
  
  
  void push(int val)
  {
     struct node *nn=cn(val);
    if(top==NULL)
    {
     top=nn; 
    }
    else
    {
      nn->next=top;
      top=nn;
    }
  }
  
  int pop()
  {
   if(top==NULL)
   {
   printf("stack is empty");
   return 0;}
   else
   {
    int x=top->data;
    struct node* temp=top;
    top=top->next;
    free(temp);
    return x;
   }
  }
  void display()
  {
    struct node *temp=top;
     printf("\n");
    while(temp!=NULL)
    {
     printf("%d ",temp->data);
     temp=temp->next;
    }
  }
  
  int main()
  {
    int n,val;
    printf("enter no of elements\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {scanf("%d",&val);
    push(val);
    }
    display();
    printf("\n%d ",pop());
     printf("%d ",pop());
    display();
    push(55);
    push(69);
   
    display();
  }
  */
  
  
  
  
  
