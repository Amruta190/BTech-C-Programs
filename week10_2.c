
#include<stdio.h> 
#define n 5
void main()
{ 
  int i,*ptr[n],arr[n];
//   scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
   ptr[i]=&arr[i];
  } 
  for(i=0;i<n;i++)
  {
      printf("Value of a[%d]=%d\n",i,*ptr[i]);
  }
} 
