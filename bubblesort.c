#include<stdio.h>
void main()
{
    int n,arr[20],i,j,temp;
    printf("Enter the no.of elements required : ");
    scanf("%d",&n);
    printf("Enter %d array elements : ",n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++) 
    {
        for (j=i+1;j<n;j++)
        {
            if (arr[i] > arr[j]) 
            {
                temp  =  arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Elements after sorting : ");
    for(i=0;i<n;i++)
    {
       printf("%d ",arr[i]);
    }
}