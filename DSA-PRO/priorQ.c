#include<stdio.h>
#include<stdlib.h>
struct node 
{
  struct node *prior,*next;
  int data;
};

struct node *front=NULL;
struct node* createnode(int val,int priority)
{
  struct node* nn=(struct node*)malloc(sizeof(struct node));
  nn->data=val;
  nn->prior=priority;
  nn->next=NULL;
  return nn;
}

void enq(int e,int p)
{
  struct node *nn=createnode(e,p);
   if(front==0 || p < front->prior)
   {
      nn->next=front;
      front=nn;
   }
   else
   {
     struct node *temp=front;
      while(temp->next!=NULL && temp->next->prior<=p)
        temp=temp->next;
      nn->next=temp->next;
      temp->next=nn;
   }
}

void display()
{
  struct node *temp=front;
  if(temp==NULL)
   printf("queue is empty");
  else
  {
    while(temp!=NULL)
    {
      printf("\n%d\t%d\n",temp->data,temp->prior);
      temp=temp->next;
    }
  } 
}


 void deq()
 {
   struct node*temp=front;
   if(front==NULL)
    printf("queue is empty");
   else
   {
    front=front->next;
    free(temp);
   } 
 }

int main()
{
  enq(5,4);
  enq(2,1);
  enq(6,2);
  enq(9,3);
  display();
  deq();
  display();
}








