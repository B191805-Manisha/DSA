#include<stdio.h>
#include<stdlib.h>
struct node* head=NULL;
struct node
{
 int data;
 struct node* next;
 };
struct node* cn(int val)
{
struct node * nn;
nn=(struct node* )malloc(sizeof(struct node*));
nn->data=val;
nn->next=NULL;
return nn;
}

struct node* insh(int n)   //insert head function
{

struct node* nn;
for(int i=0;i<n;i++)
{ int val;
   printf("enter the value : " );
   scanf("%d",&val);
   nn=cn(val);
   if(head==NULL)
    head=nn;
    else
    {
    nn->next=head;
    head=nn;}
   }
}
void display()  //display function
{
struct node* temp=head;
int i;
printf("data is ;");
while(temp!=NULL)
{
printf("\n%d\n",temp->data);
temp=temp->next;
}
}


void inspos(int m,int pos)
{                                 //insert at position
  int i=1;
  struct node* prev=head,*temp,*nn;
  nn=cn(m);
  while(i<pos-1)
  {
    prev=prev->next;
    i++;
    }
    temp=prev->next;
    prev->next=nn;
    nn->next=temp;
}


int main()
{
int n,m,pos;
printf("enter the n of nodes ; ");
scanf("%d",&n);
 insh(n);
 printf("\tinsert at head\n");
 display();
 printf("enter new node value to insert and position to insert\n");
 scanf("%d%d",&m,&pos);
 printf("\tafter insertion at position\n");
 inspos(m,pos);
 display();
 }
