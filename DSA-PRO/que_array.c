#include<stdio.h>
#define max 30

int f=-1,r=-1,val;
int q[max];

void enq(int val)
{
  if(r==max-1)
   printf("queue is full....");
  else if(f==-1||r==-1)
  {
   f=0;
   r=0;
   q[r]=val;
  }
  else
  {
   r++;
   q[r]=val;
  }
}

int deq()
{
  if(f==-1||f>r)
  { printf("queue is empty");
    return 0;
    }
  else
  {
  int x;
  x=q[f];
  f++;
  return x;
  }  

}
int main()
{int c;
  enq(3);
  enq(5);
  enq(13);
  enq(56);
  printf("enter no of elements  dequeue \n");
  scanf("%d",&c);
  for(int i=0;i<c;i++)
     printf("%d ",deq());
   return 0;

}
