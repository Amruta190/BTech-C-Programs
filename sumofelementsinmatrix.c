#include<stdio.h>
void main()
{
    int i,j,n,a[10][10],sum,sum1;
    printf("Enter no.of rows=no.of columns= ");
    scanf("%d",&n);
    printf("Enter the elements of the matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Sum of elements in row\n");
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
           sum=sum+a[i][j];
        }
        printf("%d\n" ,sum);
    }
    printf("Sum of elements in column\n");
    for(j=0;j<n;j++)
    {
        sum=0;
        for(i=0;i<n;i++)
        {
           sum=sum+a[i][j];
        }
        printf("%d\n" ,sum);
    }
    printf("Sum of diagonal elements\n");
    sum=0,sum1=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            sum=sum+a[i][j];
            if((i+j)==(n-1))
            sum1=sum1+a[i][j];
        }
    }
    printf("%d\n%d",sum,sum1);
}