#include<stdio.h>
#include<stdlib.h>
#define size 5
struct node
{
  int vertex;
  struct node *next;
};

int f=-1,r=-1;
int q[size];

struct node *createnode(int val)
 {
   struct node *nn=(struct node *)malloc(sizeof(struct node));
   nn->vertex=val;
   nn->next=NULL;
   return nn;
 }

 void enque(int val)
 {
   if(r>=size-1)
    {
      printf("\n queue overflow\n");
      return;
    }
   else if(f==-1&&r==-1)
    {
      f=r=0;
      
    }
   else
     r=r+1;
   q[r]=val;
 }
 
 int deq()
 {
   if(f==-1||f>r)
    {  
       printf("queue underflow\n");
       return 0;
    }
   else 
     return  q[f++]  ;
 }
 
 void insert(struct node *adj[],int s,int d)
 {
    struct node *dest=createnode(d);
     dest->next=adj[s];
     adj[s]=dest;
    struct node *src=createnode(s);
      src->next=adj[d];
      adj[d]=src;
 }
 
 void bfs(struct node *adj[])
 {
    int visited[size];
     for(int i=0;i<size;i++)
       visited[i]=0;
    int fv=0;
     enque(fv);
     visited[fv]=1;
     
   while(f<=r)
   {
     int v=deq();
       printf("\n%d\t",v);
     struct node *temp=adj[v];
     
       while(temp)  
       {
         if(visited[temp->vertex]==0)
           {
             enque(temp->vertex);
             visited[temp->vertex]=1;
           }
         temp=temp->next;  
       } 
   
    }
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
             printf("-> %d ",temp->vertex);
             temp=temp->next;
          }
       printf("\n");   
    } 
  }
 
   void main()
 {
   struct node *adj[size];
    
    for(int i=0;i<size;i++)
     adj[i]=NULL;
  
  insert(adj,0,1);
  insert(adj,1,2);
  insert(adj,0,4);
  insert(adj,3,2);
  insert(adj,4,1);
  display(adj);
  bfs(adj) ;         
     
 }
 
 
 
 
 
 
 
 
 
 
