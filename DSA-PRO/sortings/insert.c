#include<stdio.h>

void insert(int a[],int n)
{
  int i,j,key;
  for(i=0;i<n-1;i++)
  {
    key=a[i+1];
    for(j=i;j>=0&&a[j]>key;j--)
    {
     a[j+1]=a[j];
    }
    a[j+1]=key;
  }
}


int main()
{
  int i;
  int a[]={5,23,1,8,0,34,6,7};
  for(i=0;i<8;i++)
  printf("%d ",a[i]);
  insert(a,8);
  printf("\n");
  for(i=0;i<8;i++)
  printf("%d ",a[i]);
  return 0;
  
}
