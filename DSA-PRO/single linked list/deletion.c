#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node* next;
};

struct node* head=NULL;

struct node* cn(int val)
{
 struct node* nn;
 nn=(struct node*)malloc(sizeof(struct node));
 nn->data=val;
 nn->next=0;
 return nn;
}


struct node * inst(int val)
{
  struct node* nn,*temp=head;
  nn=cn(val);
  if(head==0)
   head=nn;
   else
   {
   while(temp->next!=0)
   temp=temp->next;
   temp->next=nn;
   }
}


void display()
{
  struct node* temp=head;
  while(temp!=0)
  {
   printf("%d ",temp->data);
   temp=temp->next;
   }
  printf("\n");
}

void delbeg()
{
struct node *temp=head;
head=head->next;
free(temp);
printf("after del the 1st element\n");
display();
}

void delast()
{
 struct node* temp=head,*prev;
 while(temp->next!=0)
  {
  prev=temp;
  temp=temp->next;
  }
  prev->next=0;
  free(temp);
  
   printf("after del last element \n");
  display();
}

void delpos(int p)
{
 int i=1;
 struct node* prev=head;
 struct node* temp=head;
 while(i<p)
 {  
  prev=temp;
  temp=temp->next;
  i++;
  }
  prev->next=temp->next;
  free(temp);
  display();
 }



int main()
{
  int i,n,val,p;
  printf("enter no of nodes ");
  scanf("%d",&n);

  for(i=0;i<n;i++)
 {
  printf("enter the value ; ");
  scanf("%d",&val);
  inst(val);
 }
 printf("before deletion\n");
 display();

 printf("enter position to del; ");
 scanf("%d",&p);

 if(p==1)
 delbeg();

 else if(p==n)
 delast();

 else if(p>n)
   printf("\nposition exeeded\n");
 else
 delpos(p);



}
