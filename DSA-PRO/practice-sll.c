#include<stdio.h>
#include<stdlib.h>

struct node
{
  struct node *next;
  int data;
};

  struct node *head=NULL;
 struct node* cn(int val)
 {
   struct node *nn=(struct node*)malloc(sizeof(struct node));
   nn->data=val;
   nn->next=NULL;
   return nn;
 } 
 
 void display()
 {
  printf("\n");
   struct node *temp=head;
   while(temp!=NULL)
   {
    printf("%d ",temp->data);
    temp=temp->next;
   }
 }
 
void insh(int val)
 {
   struct node *nn=cn(val);
   if(head==NULL)
   {
     head=nn;
   }
   else
   {
     nn->next=head;
     head=nn;
   }
 }
void  inst(int val)
 {
 struct node *temp=head;
   struct node *nn=cn(val);
   if(head==NULL)
   head=nn;
   else
   {
     while(temp->next!=NULL)
     temp=temp->next;
     temp->next=nn;
   }
 }
 void inspos(int pos,int val)
 {
 int c=1;
 struct node * nn=cn(val);
 struct node*temp=head;
 while(c<pos-1)
 {
 temp=temp->next;
 c++;
 }
 nn->next=temp->next;
 temp->next=nn;
 }
  void delh()
  {
    struct node*temp=head;
    if(head==NULL)
    printf("no linked list");
    else if(head->next==NULL)
    { head=NULL;
      free(temp);
    }
    else
    {
      head=head->next;
      free(temp);
    }
  }
  
  void delt()
  {
    struct node*temp=head;
    if(head==NULL)
    printf("\nno ll");
    else if(temp->next==NULL)
    {
     free(temp);
     head=NULL;
    }
    else
    {
      while(temp->next->next!=NULL)
      temp=temp->next;
      free(temp->next->next);
      temp->next=NULL; 
    }
  }
 
 
  
  void delpos(int pos)
  {
   struct node *temp=head,*prev=head;
   int c=1;
   if(pos==1)
   delh();
   else 
   {
    while(c<pos)
     { prev= temp;
       temp=temp->next;
        c++;
      }
 
  prev->next=temp->next;
  free(temp);
  } 
  }
  
  void rev()
  {
   struct node *temp,*prev=NULL,*curr=head;
   while(curr!=NULL)
   {
     temp=curr->next;
     curr->next=prev;
     prev=curr;
     curr=temp;
   }
   head=prev;
  }
  
  
  
 int main()
 {
   int i,n,pos,val;
   printf("enter no of elements to insert\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
   scanf("%d",&val);
   insh(val);
   }
   display();
   inst(10);
   inst(34);
   display();
   /*printf("\nenter position to insert; ");
   scanf("%d",&pos);
   inspos(pos,5);
   display();
   delh();
   delh();
   display();
   delt();
   delt();
   display();
  printf("\nenter position to delt\n; ");
   scanf("%d",&pos); 
   delpos(pos);
   display();*/
   rev();
   display();
 return 0;  
 }


