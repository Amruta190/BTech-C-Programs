#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,n,sum=0,*arr;
    printf("Enter the no.of elements in an array ");
    scanf("%d",&n);
    printf("Enter the elements\n");
    arr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",(arr+i));
    }
    for(i=0;i<n;i++)
    {
        sum=sum+*(arr+i);
    }
    printf("%d",sum);
}