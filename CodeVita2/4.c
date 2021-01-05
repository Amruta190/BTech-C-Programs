#include<stdio.h>
void main()
{
    int i,arr[50],n=0,sum=0;
    for(i=0;i<50;i++)
    {
        scanf("%d",&arr[i]);
        n++;
    }
    for(i=0;i<50;i++)
    {
        sum=sum+arr[i];
    }
}