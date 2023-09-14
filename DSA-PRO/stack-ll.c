#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node *next;
};

struct node * top=NULL;



void push(int val)
{
 struct node *nn;
 nn=(struct node *)malloc(sizeof(struct node));
 nn->data=val;
 nn->next=NULL;
 if(top==0)
  top=nn;
 else
 {
   nn->next=top;
   top=nn;
 } 

}

int pop()
{
  struct node *temp=top;
  if(top==0)
 { printf("\nstack underflow\n");
    return 0;
  }  
  else
  { 
    int x=top->data;
    top=top->next;
    free(temp);
    return x;
   }  


}


int main()
{
  push(5);
  push(6);
  push(9);
  printf("%d ",pop());
  printf("%d ",pop());
    printf("%d ",pop());
      printf("%d ",pop());


}
