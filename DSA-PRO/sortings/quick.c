#include<stdio.h>
int partition(int a[],int ,int);
void qs(int a[],int,int);
int partition(int a[],int low,int high)
{
  int pivot=a[high];
  int i,j,t;
  i=low-1;
  for(j=low;j<high;j++) 
  {
   if(a[j]<pivot)
   {i++;
   t=a[j];
   a[j]=a[i];
   a[i]=t;
  }}
  t=a[i+1];
  a[i+1]=a[high];
  a[high]=t;
  return i+1;

}

void qs(int a[],int low,int high)
{
  int pivot;
  if(low<high)
  {
  pivot=partition(a,low,high);
  qs(a,0,pivot-1);
  qs(a,pivot+1,high);
}}

void main()
{ 
int i;
int a[]={12,1,34,234,18,81,8,0};
 
 for(i=0;i<8;i++)
  printf("%d\t",a[i]);
  printf("\n");
    qs(a,0,7);
  for(i=0;i<8;i++)
  printf("%d\t",a[i]);
 }
