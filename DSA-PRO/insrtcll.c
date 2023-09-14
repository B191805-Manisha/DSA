#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node* next; 
};

struct node* tail=NULL;
struct node* cn(int val)
{
struct node * nn;
nn=(struct node*)malloc(sizeof(struct node));
nn->data=val;
nn->next=NULL;
return nn;
}

void display()
 {
 struct node* temp=tail->next;
 if(tail==NULL)
 printf("no linked list\n");
 else
 {
 while(temp->next!=tail->next)
 {
 
 printf("%d ",temp->data);

 temp=temp->next; 
 }
 printf("%d ",temp->data);}
 
 }
 
 void insrtbeg(int val)
 {                                      //insert begining
 struct node *nn;
 nn=cn(val);
 if(tail==NULL)
  {
  tail=nn;
  nn->next=tail;
  }
  else
  {
  nn->next=tail->next;
  tail->next=nn;
  }
 }
 
 void insrtend(int val)                    //insert at end
 {
 struct node* nn;
 nn=cn(val);
 if(tail==0)
 {
   tail=nn;
   tail->next=nn;
 }
else
{
nn->next=tail->next;
tail->next=nn;
tail=nn;
} 
  }
 
void insrtpos(int val,int pos)                  //insert at position
{
struct node *temp=tail->next,*nn;
int i=1;
nn=cn(val);
while(i<pos-1)
{
temp=temp->next;
i++;
}
nn->next=temp->next;
temp->next=nn;


} 

 
 
 
 int main()
 {
   insrtbeg(1);
   insrtbeg(2);
   insrtbeg(3);
   insrtbeg(4);  
  insrtend(5);
  insrtend(6);
  insrtend(7);
  display();
  printf("\ninserting  10 at position 5\n");
  insrtpos(10,5);
  display();
 }
 
 
 
 
 
 
 
 
 
 
