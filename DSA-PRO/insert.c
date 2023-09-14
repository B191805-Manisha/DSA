#include<stdio.h>

void insert(int a[],int n)
{
  int i,j,key;
  for(i=0;i<n-1;i++)
  {
    key=a[i+1];
    for(j=i;j>=0 && a[j]>key;j--)
    a[j+1]=a[j];
    a[j+1]=key;
  }
}



int main()
{
   int n=5,i;
  int a[5]={90,2,32,31,2};
   printf("list ");
   for(i=0;i<n;i++)
   printf("%d ",a[i]);
  insert(a,n);
    printf("\nlist after sort ");
   for(i=0;i<n;i++)
   printf("%d ",a[i]);

}
