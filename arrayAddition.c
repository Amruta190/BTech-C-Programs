//program for array addition
#include<stdio.h>
void main()
{
    int n,a[100],first,sum=0,i,j;
    printf("Enter the no.of elements in an array : ");
    scanf("%d",&n);
    printf("Enter %d array elements : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        first=a[j];
        for(i=0;i<n;i++)
        {
            sum=sum+a[i];
        }
        printf("%d ",sum-first);
        sum=0;
    }
}