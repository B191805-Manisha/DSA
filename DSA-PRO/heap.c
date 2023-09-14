// heap sort
#include<stdio.h>
void heapify(int a[],int n)
{
   for(int j=1;j<n;j++)
   {
     int child,parent;
     for(child=j;child>0;child=parent)
     {
       parent=(child-1)/2;
       if(a[parent]<a[child])
       {
         int temp=a[parent];
         a[parent]=a[child];
         a[child]=temp;
       }
     }
   }
}

void heapsort(int a[],int n)
{
  heapify(a,n);
  for(int i=n-1;i>0;i--)
  {
    int temp=a[i];
         a[i]=a[0];
         a[0]=temp;
      heapify(a,i);   
  }
}

int main()
{
  int a[]={33,1,0,34,6,78,3};
  printf("entered array; ");
  for(int i=0;i<7;i++)
  printf("%d\t",a[i]);
  heapsort(a,7);
  printf("\nsorted array;\t");
  for(int i=0;i<7;i++)
  printf("%d\t",a[i]);
}
