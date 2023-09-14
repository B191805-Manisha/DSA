#include<stdio.h>

void select(int a[],int n)
{
int i,t,j;
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]>a[j])
      {
        t=a[i];
       a[i]=a[j];
       a[j]=t;
      }
    }
  }
  
}

int main()
{
 int i;
  int a[]={2,13,23,6,7,9,0};
  for(i=0;i<7;i++)
 { printf("%d ",a[i]);}
  printf("\n");
  select(a,7);
  for(i=0;i<7;i++)
  printf("%d ",a[i]);
  return 0;
}
