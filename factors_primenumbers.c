#include<stdio.h>
void main()
{
    int n,i,count=0;
    scanf("%d",&n);
    if(n<0)
    printf("Invalid input number");
    else
    {
    printf("The factors are\n");
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
        printf("%d ",i);
        count++;
        }
    }
    if(count==2)
    printf("\n%d is prime\n",n);
    else
    {
        printf("\n%d is not a prime\n",n);
    }
    }   
}