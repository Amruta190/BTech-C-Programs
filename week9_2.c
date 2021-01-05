#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *arr,n,i,sum=0;
    float avg;
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",(arr+i));
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/n;
    printf("Average of given values is %f",avg);
}