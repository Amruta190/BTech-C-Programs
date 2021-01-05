#include<stdio.h>
void main()
{
    int i,j,n,a[10][10],k;
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
    printf("Upper triangle of the matrix is\n");
    for(i=0;i<n;i++)
    {
        for(k=0;k<i;k++)
        {
            printf(" ");
        }
        for(j=0;j<n;j++)
        {
            if(i<=j)
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    printf("Lower triangle of the matrix is\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i>=j)
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}