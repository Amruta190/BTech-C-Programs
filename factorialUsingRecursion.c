#include<stdio.h>
int fact (int n);
void main()
{
   int n;
   printf("Enter the positive number\n");
   scanf("%d",&n);
   printf("Factorial of %d is %d",n,fact(n));
}
int fact(int n)
{
    if(n>0)
    return n*fact(n-1);
    else
    return 1;
}