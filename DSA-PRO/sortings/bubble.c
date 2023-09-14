#include<stdio.h>

void bubble(int a[],int n)
{
  int i,j;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
      if(a[j]>a[j+1])
      {
        int temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }

}


int main()
{
   int n=5,i;
  int a[5]={90,2,32,31,2};
   printf("list ");
   for(i=0;i<n;i++)
   printf("%d ",a[i]);
   bubble(a,n);
    printf("\nlist after sort ");
   for(i=0;i<n;i++)
   printf("%d ",a[i]);

}
