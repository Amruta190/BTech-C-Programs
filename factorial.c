#include<stdio.h>
void main()
{
    int n,p,fact=1;
    printf("Enter the positive number\n");
    scanf("%d",&n);
    p=n;
    while(n>0)
    {
        fact=fact*n;
        n--;
    }
    printf("Factorial of %d is %d",p,fact);
}