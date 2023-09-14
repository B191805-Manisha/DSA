#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node* next;
};

struct node * f=NULL,*r=NULL;

struct node * cn(int val)
{
  struct node* nn;
  nn=(struct node*)malloc(sizeof(struct node));
  nn->data=val;
  nn->next=NULL;
  return nn;

}



void enq(int val)
{
  struct node *nn;
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

int deq()
{
 if(r==NULL || f==NULL)
 {
   printf("queue is empty\n");
   return 0;
 }
 else
 {
  struct node *temp=f;
  int x=f->data;
  f=f->next;
  free(temp);
  return x;
 }
}


int main()
{
  enq(23);
  enq(32);
  enq(2);
  printf("%d ",deq());
   printf("%d ",deq());
    printf("%d ",deq());
     printf("%d ",deq());
     return 0;
}











