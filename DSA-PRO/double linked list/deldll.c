#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node* next,*prev;
};

struct node* head=NULL;

struct node* cn(int val)
{
 struct node* nn;
 nn=(struct node*)malloc(sizeof(struct node));
 nn->data=val;
 nn->next=0;
 nn->prev=0;
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
head->prev=NULL;
printf("after del the 1st element\n");
display();
}

void delast()
{
 struct node* temp=head,*prev;
 while(temp->next!=0)
  {
  
  temp=temp->next;
  }
 temp->prev->next=NULL;
  free(temp);
  
   printf("after del last element \n");
  display();
}

void delpos(int p)
{
 int i=1;
 
 struct node* temp=head;
 while(i<p)
 {  
  
  temp=temp->next;
  i++;
  }
  temp->prev->next=temp->next;
  temp->next->prev=temp->prev;
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
