//insert head of double linked list

#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node* prev;
struct node* next; 
};

struct node* head=NULL;
struct node* cn(int val)
{
struct node * nn;
nn=(struct node*)malloc(sizeof(struct node));
nn->data=val;
nn->prev=NULL;
nn->next=NULL;
return nn;
}

 void insh(int n)
{
  struct node* nn;
  nn=cn(n);
   if(head==NULL)
      head=nn;
   else
   {
     struct node* temp=head;
     temp->prev=nn;
     nn->next=temp;
     head=nn;
   }

 }
 
 void display()
 {
 struct node* temp=head;
 while(temp!=NULL)
 {
 
 printf("%d",temp->data);
 printf("prev=%u next=%u",temp->prev,temp->next);
 temp=temp->next; 
 }
 }
 
 int main()
 {
 int n,i,val;
 printf("enter no of nodes ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 printf("enter no ");
 scanf("%d ",&val);
 insh(val);
 }
 display();
 }
 
 
 
 
 
 
 
 
 
