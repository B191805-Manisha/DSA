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
 nn->next=NULL;
 return nn;
 
 }
 void display()
 {
 struct node* temp=head;
 while(temp!=NULL)
 {	
 printf("%d ",temp->data);
 temp=temp->next;
 }
 
 }
 
 struct node* inst(int val)
 {
   struct node *temp=head,*nn;
  
     nn=cn(val);
     if(head==NULL)
      head =nn;
      else
      {
      while(temp->next!=NULL)
      
      {temp=temp->next;}
      temp->next=nn;
      }
   }
  
  struct node* rev()
  {
  struct node *temp,*prev=NULL,*curr=head;
  while(curr!=0)
  {
  temp=curr->next;
  curr->next=prev;
  prev=curr;
  curr=temp;
  }
  return prev;
  }  
 
 
 int main()
 {
 
 int n;
 printf("enter the no of nodes;");
 scanf("%d",&n);
 for(int i=0;i<n;i++)
   {int val;
     printf("enter the value : ");
     scanf("%d",&val);
     inst(val);}
 printf("\n before reverse \n");
 display();
 head=rev();
 printf("\n after reverse \n");
 display();
 }
