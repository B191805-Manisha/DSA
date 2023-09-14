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
 
 void insrtail(int val)
 {
 struct node *nn;
 nn=cn(val);
 if(tail==NULL)
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
 
 void delhead()        //deleting the head
 {
 struct node *temp=tail->next;
 if(tail==0)
   printf("no tail");
 else if (temp->next==temp)
 {tail=0;  
   free(temp);
   }
   else
   {
   tail->next=temp->next;
   free(temp);
   
   }
 }
 
 
 void delend()             //deleting tail
 {
 struct node *prev,*curr=tail->next;
 if(tail==0)
 printf("list is empty\n");
 else if(curr->next==curr)
 {
 tail=0;
 free(curr);
 } 
 else
 {
 while(curr->next!=tail->next)
 {
 prev=curr;
 curr=curr->next;
 }
 prev->next=tail->next;
 tail=prev;
 free(curr);
 }
 }
 
 
void delpos(int pos)                 //deleting at position
{
int i=1;
struct node *temp,*curr=tail->next;
while(i<pos-1)
{
curr=curr->next;
i++;
}
temp=curr->next;
curr->next=temp->next;
free(temp);
} 
 
 
 
 
 int main()
 {
 int i;
 insrtail(5);
 insrtail(7);
 insrtail(8);
 insrtail(3);
 insrtail(23);
 display();
printf("\n enter the position to del\n");
scanf("%d",&i);
if(i==1)
 delhead();
else if(i==5)
 delend();
else if(i>1 && i<5) 
 {
 
 delpos(i);
 }
 else
 printf("not suitable position");
 printf("\n after deleting \n");
 display();
 
 }
 
 
 
 
 
