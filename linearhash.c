#include<stdio.h>
#define n 8
int arr[n];
void insert(int val)
{
  int key=val%n;
  if(arr[key]==-1)
   arr[key]=val;
   else
   {
     int newkey,i;
     for(i=1;i<n;i++)
     {
       newkey=(key+i)%n;
       if(arr[newkey]==-1)
        {arr[newkey]=val;  
        break;}
        
     }
     if(i==n)
      printf("\nelement cant be inserted");
   }
}

void display()
{
  for(int i=0;i<n;i++)
   {
      printf("arr[%d] = %d ",i,arr[i]);
      printf("\n");
   }
}
int main()
{
    for(int i=0;i<n;i++)
    {
      arr[i]=-1;
    }
    insert(10); //key = 10 % 7 ==> 3
    insert(4);  //key = 4 % 7  ==> 4
    insert(2);  //key = 2 % 7  ==> 2
    insert(3);  //key = 3 % 7  ==> 3 (collision)
    insert(17);  //key = 17 % 7  ==> 3 (collision)
    insert(24);  //key = 24 % 7  ==> 3 (collision)
    insert(31);  //key = 31 % 7  ==> 3 (collision)
    insert(38);  //key = 38 % 7  ==> 3 (collision)

    printf("Hash table\n");
    display();
    printf("\n");

    return 0;
}
