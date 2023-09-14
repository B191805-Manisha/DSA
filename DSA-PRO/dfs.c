#include<stdio.h>
#include<stdlib.h>
#define size 6
int top=-1;
int s[size];

struct node 
{
   int vertex;
   struct node *next;
};

struct node *createnode(int vertext){
	struct node *nn;
	nn = (struct node *) malloc(sizeof(struct node));
	nn->vertex = vertext;
	nn->next =  NULL;
	return nn;
}

void push(int val)
{
  if(top>=size-1)
  {
   printf("\nstack is full\t");
   return;
   }
   else
   s[++top]=val;
}

int pop()
{
  if(top<0)
  {
    printf("stack underflow\n");
    return 0;
  }
  else
  return s[top--];
}

void insert(struct node *adj[],int d,int s)
{
  struct node *dest,*src;
  dest=createnode(d);
  dest->next=adj[s];
  adj[s]=dest;
  
  src=createnode(s);
  src->next=adj[d];
  adj[d]=src;

}

void display(struct node *adj[])
{
  struct node *temp;
  for(int i=0;i<size;i++)
  {
     temp=adj[i];
     printf("\n%d ",i);
     while(temp!=NULL)
     {
       printf(" -> %d ",temp->vertex);
       temp=temp->next;
     }
     printf("\n");
  }
}

void dfs(struct node *adj[])
{
  int visited[size];
  for(int i=0;i<size;i++)
    visited[i]=0;
  int sv=0;
  push(sv);
  
   while(top>=0)
   {
     int v=pop();
     if(visited[v]==0)
     {
       printf(" %d ",v);
       visited[v]=1;
     }
     struct node *temp=adj[v];
     while(temp!=NULL)
     {
       if(visited[temp->vertex]==0)
        push(temp->vertex);
       temp=temp->next; 
     }
     
   }
    
}


int main()
{
  struct node *adj[size];
  for(int i=0;i<size;i++)
   adj[i]=NULL;
  insert(adj,0,  1);
insert(adj,0,  2);
insert(adj,1,  3);
insert(adj,1,  4);
insert(adj,2,  5); 
display(adj);
dfs(adj);
}
















