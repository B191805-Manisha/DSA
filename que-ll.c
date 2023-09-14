#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
};

struct node *r=NULL;
struct node *f=NULL;

struct node* cn(int val)
{
  struct node *nn;
  nn=(struct node*)malloc(sizeof(struct node));
  nn->data=val;
  nn->next=NULL;
  return nn;
}

void display()
{
  if(f==0 && r==0)
  printf("queue is empty\n");
  else
  {
   struct node *temp=f;
   while(temp!=NULL)
   {
     printf("%d ",temp->data);
     temp=temp->next;
   }
  }

}

void enq(int val)
{
  struct node* nn;
  nn=cn(val);
  if(f==NULL)
   {
     f=nn;
     r=nn;
   }
   else
   {
     r->next=nn;
     r=nn;     
   }

}


void deq()
{
   if(f==NULL)
   {printf("queue is empty\n");
   r=NULL;}
   else
   {
    struct node *temp=f;
    printf("%d ",f->data);
     f=f->next;
     free(temp);
   }

}

int main()
{
  enq(10);
  enq(2);
  enq(23);
  enq(21);
  
  display();
  printf("\n");
  deq();
  deq();
  display();
  printf("\n");
  enq(15);
  enq(33);
  display();
  printf("\n");
  deq();
  deq();
  deq();
  deq();
  deq();
  deq();
  return 0;
}





