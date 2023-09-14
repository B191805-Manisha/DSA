#include<stdio.h>
#include<stdlib.h>

struct node
{
 struct node *prev,*next;
 int data;
};
struct node *head=NULL;
void display()
{
 printf("\n");
 struct node*temp=head;
 while(temp!=NULL)
 {
   printf("%d ",temp->data);
   temp=temp->next;
 }
}
struct node *cn(int val)
{
  struct node *nn=(struct node*)malloc(sizeof(struct node));
  nn->data=val;
  nn->next=NULL;
  nn->prev=NULL;
  return nn;
}

void insh(int val)
{
struct node *nn=cn(val);
if(head==NULL)
head=nn;
else
{
head->prev=nn;
nn->next=head;
head=nn;
}

}

void inst(int val)
{
  struct node *nn,*temp=head;
  nn=cn(val);
  if(head==NULL)
  head=nn;
  else
  {
  while(temp->next!=NULL)
  temp=temp->next;
  nn->prev=temp;
  temp->next=nn;
}}

void inspos(int val,int pos)
{
  int c=1;
  struct node *nn,*temp=head;
  nn=cn(val);
  while(c<pos-1)
  {
  temp=temp->next;
  c++;
  }
  nn->prev=temp;
  nn->next=temp->next;
  temp->next=nn;
  nn->next->prev=nn;
}
void delh()
{
  struct node *temp=head;
  if(head==NULL)
  printf("list is empty\n");
  else if(head->next==NULL)
  {
    free(temp);
    head=NULL;
  }
  else
  {
   head= head->next;
   head->prev=NULL;
   free(temp);
  }
 }

 void delt()
 { struct node *temp=head;
   if(head==NULL)
  printf("list is empty\n");
  else if(head->next==NULL)
  {
    free(temp);
    head=NULL;
  }
  else{
    while(temp->next!=NULL)
    temp=temp->next;
    temp->prev->next=NULL;
    free(temp);
  }
 }
 void delpos(int pos)
 {
   int c=1;
   struct node *temp=head;
   if(pos==1)
   delh();
   else
   {
     while(c<pos)
     {
       temp=temp->next;
       c++;
     }
     temp->prev->next=temp->next;
     temp->next->prev=temp->prev;
     free(temp);
   }
 }
 
 void rev()
 {
   struct node *temp,*curr=head;
   while(curr!=NULL)
   {
      temp=curr->prev;
      curr->prev=curr->next;
      curr->next=temp;
      curr=curr->prev;}
      head=temp->prev;
 }

int main()
{
  int i,n,val;
  printf("enter no of elem ");
  scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     scanf("%d",&val);
     insh(val);
   }
   display();
   inst(123);
   inst(145);
   display();
   //inspos(189,5);
   //display();
   delh();
   display();
   delt();
   display();
   //delpos(4);
  // display();
  rev();
  display(); 
  }







