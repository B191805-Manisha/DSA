#include<stdio.h>
#include<stdlib.h>
/*#define max 7
 int r=-1,f=-1;
 
 int que[max];
 
 void enq(int val)
 {
  if(r==max-1)
   printf("queue is full");
   else if(f==-1)
    {
      r=0;
      f=0;
      que[r]=val;
    }
    else
    que[++r]=val;
 }
void display()
{
  int i;
  for(i=f;i<max;i++)
  printf("%d ",que[i]);
}
 
 int deq()
 {
   if(f==-1||f>r)
   {
     printf("queue is empty");
     return 0;
   }
   else
   {
     int x=que[f];
     f++;
     return x;
   }
 }
 
 int main()
 {
   int i,val;
   for(i=0;i<7;i++)
   {
    scanf("%d",&val);
    enq(val);
   }
  display();
   printf("%d ",deq());
   printf("%d ",deq());
   printf("%d ",deq());
  
 }
 
 struct node
 {
   struct node *next;
   int data;
 };
 struct node *f=NULL,*r=NULL;
 
 struct node *cn(int val)
 {
   struct node *nn=(struct node*)malloc(sizeof(struct node));
   nn->data=val;
   nn->next=NULL;
   return nn;
 }
 
 void enq(int val)
 {
   struct node*nn=cn(val);
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
   if(f==NULL)
  { printf("queue is empty");
   r==NULL;
   return 0;
  }
   else
   {
     struct node*temp=f;
     int x=f->data;
     f=f->next;
     free(temp);
     return x;
   }
 }
 
 void display()
 {
   struct node*temp=f;
   while(temp!=NULL)
   {
    printf("%d ",temp->data);
    temp=temp->next;
   }
 }
 
 int main()
 {
   enq(6);
   enq(1);
   enq(10);
   enq(15);
   enq(27);
   display();
   printf("\n");
   printf("%d ",deq());
   printf("%d ",deq());
 }*/
 
 #define max 5
 int f=-1,r=-1;
 int que[max];
 
  void enq(int val)
  {
    if(f==-1||r==-1)
    {
     f=0;
     r=0;
     que[r]=val;
    }
    else
    {
      r=(r+1)%max;
      que[r]=val;
    }
  }
  
  int deq()
  {
    if(f==-1)
    {
     printf("que is empty");
     return 0;
    }
    else if(f==r)
    {
      f=-1;
      r=-1;
    }
    else
    {
    int x=que[f];
     f=(f+1)%max;
     return x;
    }
  }
  
  void display()
  {
    int i=f;
    while(i!=r)
  {  printf("%d ",que[i]);
     i=(i+1)%max;
  }
  printf("%d",que[i]);
  }

int main()
{
  int i,val;
  for(i=0;i<max;i++)
  {
   scanf("%d",&val);
   enq(val);
  }
  display();
  printf("\n");
  printf("%d ",deq());
  printf("%d ",deq());
   printf("\n");
   enq(100);
   enq(12);
   display();
   return 0;
} 
 
 
 
 
 
 
 
 
 
 
 
 
 
