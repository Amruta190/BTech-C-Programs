#include<stdio.h>
void main()
{
    int i,n,l,a[]={1,2,3,4,5};
    printf("Enter the rotation number : ");
    scanf("%d",&n);
    l=sizeof(a)/sizeof(a[0]);
    printf("Array before rotation is : ");
    for(i=0;i<l;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<n;i++)
    {
        int j,first;
        first=a[0];
        for(j=0;j<l-1;j++)
        {
           a[j]=a[j+1];
        }
        a[j]=first;
    }
    printf("\nArray after left-rotation is : ");
    for(i=0;i<l;i++)
    {
        printf("%d ",a[i]);
    }
}