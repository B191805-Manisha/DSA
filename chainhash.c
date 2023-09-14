#include<stdio.h>
#include<stdlib.h>
#define n 6

struct node 
{
  int val;
  struct node *next;
};
struct node *ht[n];
struct node *cn(int val)
{
  struct node *nn=(struct node*)malloc(sizeof(struct node));
  nn->val=val;
  nn->next=NULL;
  return nn;
}

void insert(int val)
{
  struct node *nn=cn( val);
  struct node *temp;
  int h=nn->val % n;
  if(ht[h]==NULL)
   ht[h]=nn;
  else
   {
    temp=ht[h];
    while(temp->next!=NULL)
     temp=temp->next;
    temp->next=nn; 
   } 
}


void display()
{
 printf("\n\n hashtable\n\n");
 for(int i=0;i<n;i++)
 {
   struct node *temp=ht[i];
   while(temp!=NULL)
   { printf("%d\t",temp->val);
    temp=temp->next;}
    printf("NULL \n");
 }
}
void search(int val)
{
  int h=val%n;
   struct node *temp=ht[h];
   while(temp!=NULL &&temp->val!=val)
   temp=temp->next;
   if(temp==NULL)
    printf("element not found");
    else if(temp->val==val)
    printf("element found");
    }

void del(int key)
{
  int f=0, h=key%n;
  struct node *prev,*temp=ht[h];
  while(temp!=NULL && temp->val!=key)
  {prev=temp;
  temp=temp->next;
  f=1;}
  if(temp->val==key)
  {
    if(f==0)
    ht[h]=temp->next;
    else
    prev->next=temp->next;
    free(temp);
  }
  else
   printf("element not found");
  
    
  
  
}


int main()
{int v;
  for(int i=0;i<n;i++)
   ht[i]=NULL;
   for( int i=0;i< n ; i++){
   printf("\nenter number to insert ");
   scanf("%d",&v);
   insert(v);
   }
   display();
   search(5);
 del(4);
  display();
   return 0;
}





