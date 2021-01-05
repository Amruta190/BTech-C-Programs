//even and odd nummbers
#include<stdio.h>
void even(int);
void odd(int);
void main()
{
    int n,m;
    printf("Enter a number : ");
    scanf("%d",&n);
    even(n);
    odd(n);
}
void even(int n)
{
  int i=0;
  printf("Even numbers upto %d are : %d ",n,i);
  while (i^n)
  {
     if(i^n)
     {
        i++;
        i++;
        printf("%d ",i);
     }
  }
}
void odd(int n)
{
  int j=0;
  printf("\nOdd numbers upto %d are : ",n);
  while (j^n)
  {
     if(j^n)
     {
        j++;
        printf("%d ",j);
        j++;
     }
  }
}