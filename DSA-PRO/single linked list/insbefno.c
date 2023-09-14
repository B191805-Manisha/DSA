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
 printf("\n");
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
  
  struct node *inbe(int m,int p)
 {   struct node *nn;
  nn=cn(p);
  struct node* prev=head,*temp=NULL;
  
  while(prev->data!=m)
    {
      temp=prev;
      prev=prev->next;
    }
   if(prev==head)
    {   nn->next=prev;
        head=nn;
    }
   else
   {
      nn->next=prev;
      temp->next=nn;
   }
 }
  
 
 
 int main()
 {
 
 int n,m,p;
 printf("enter the no of nodes;");
 scanf("%d",&n);
 for(int i=0;i<n;i++)
   {int val;
     printf("enter the value : ");
     scanf("%d",&val);
     inst(val);}
 
 display();
 
 printf("enter the data where to insert the new node ; ");
 scanf("%d",&m);
 printf("enter the element in new node ; ");
 scanf("%d",&p);
 inbe(m,p);
 display();
 }
