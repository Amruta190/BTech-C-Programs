#include<stdio.h>
void main()
{
    int i,j,n,a[10][10],b[10][10],x;
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
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
         b[i][j]=a[j][i];   
        }
    }
   for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=b[i][j])
            {
                x=1;
                break;
            }
        }    
    } 
    if(x==1)
    printf("The given matrix is not symmetric");
    else
    {
        printf("The given matrix is symmetric");
    }
}    
    