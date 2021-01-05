#include<stdio.h>
void main()
{
    int a=0,b=1,c,n,i;
    printf("Enter Fibonacci Series number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
}