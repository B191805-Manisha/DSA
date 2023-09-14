#include<stdio.h>
#define max 5

int q[max],f=-1,r=-1;

void enq(val)
{
 if(r==-1 && f==-1)
   {
   f=0;
   r=0;
   q[r]=val;
   }
  else if((r+1)%max==f)
   printf("queue is full\n");
 else
 {
   r=(r+1)%max;
   q[r]=val;
 }

}

  int deq()
  {
   if(f==-1 && r==-1)
   {printf("queue is emplty");
   return 0;
   }
   else if(f==r)
   {
   int x=q[f];
   f=-1;
   r=-1;
   return x;
   }
  else
  {
  int x=q[f];
  f=(f+1)%max;
  return x;
   }
  }
  
  void display()
  {
  if(f==-1 && r==-1)
  printf("queue is emplty");
  
  else
  {
  int i=f;
  while(i!=r)
  {
   printf("%d ",q[i]);
   i=(i+1)%max;
  }
  printf("%d ",q[r]);
  }
  printf("\n");
  }
  
  
  
  int main()
  {
  enq(4);
  enq(12);
  enq(10);
  enq(12);
   enq(13);
   display();
   printf("%d ",deq());
   printf("%d ",deq());
   printf("\n");
   enq(8);
   enq(17);
   display();
  }
  
  
  
  
  
  
  
  
  
  
  
  
