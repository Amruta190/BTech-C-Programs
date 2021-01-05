#include<stdio.h>
void main()
{
    int n,count=0;
    printf("Enter an integer: ");
    scanf("%d",&n);
    while(n>0)
    {
        n=n/2;
        count++;
    }
    printf("The no.of bits required are : %d",count);
}