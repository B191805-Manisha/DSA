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
 printf("%d",temp->data);
 //printf("\n prev=%u next=%u\n",temp->prev,temp->next);
 temp=temp->next; 
 }
 }
 
 void insrt_pos(int val,int pos)
 {
 struct node* temp=head,*curr,*nn;
 int i=1;
 nn=cn(val);
 while(i<pos-1)
 {
 
 temp=temp->next;
 i++;
 }
nn->prev=temp;
nn->next=temp->next;
temp->next=nn;
nn->next->prev=nn;
 
 
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
 display();
 insrt_pos(5,3);
 printf("\n after insert at pos 3 \n");
 
 display();
 }
 
 
 
 
 
 
 
 
 
