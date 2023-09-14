//insert tail of double linked list

#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node* prev;
struct node* next; 
};

struct node* head=NULL;
struct node* cn(int val)     //create node fuction
{
  struct node * nn;
  nn=(struct node*)malloc(sizeof(struct node));
  nn->data=val;
  nn->prev=NULL;
  nn->next=NULL;
return nn;
}

 void inst(int n)      //insert tail function
{
  struct node* nn;
  nn=cn(n);
   if(head==NULL)
      head=nn;
   else
   {
     struct node* temp=head;
     while(temp->next!=NULL)
      {
       temp=temp->next;
      }
     temp->next=nn;
     nn->prev=temp;
     
   }
 }
  
 void display()      //display fuction
 {
 struct node* temp=head;
 while(temp!=NULL)
 {
 printf("%d ",temp->data);
//printf("\n prev=%u next=%u\n",temp->prev,temp->next);
 temp=temp->next; 
 }
 }
 
 void rev()
 {
   if(head==NULL)
     printf("rev cannot be performed");
   else
   {
     struct node *temp,*curr=head;
     while(curr!=0)
       {
       temp=curr->prev;
       curr->prev=curr->next;
       curr->next=temp;
       curr=curr->prev;
       }
       head=temp->prev;
       display();
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
 scanf("%d",&val);
 inst(val);
 }
 printf("before reverse      ");
 display();
 printf("after reverse    ");
 rev();
 
 }
 
 
 
 
 
 
 
 
 
