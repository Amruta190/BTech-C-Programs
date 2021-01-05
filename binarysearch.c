#include<stdio.h>
void ascending(int [],int,int);
int binarySearch(int [],int,int,int);
void main()
{
    int n,i,a[10],search;
    printf("Enter no.of array elements : ");
    scanf("%d",&n);
    printf("Enter %d array elements : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]); 
    }
    printf("Enter the element to be searched : ");
    scanf("%d",&search);
    ascending(a,n,search);
}
void ascending(int a[],int n,int search)
{
    int i,j,temp,first,last,k,b[10];
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    printf("Ascending order : ");
    for (i=0;i<n;i++) 
    {
        for (j=i+1;j<n;j++)
        {
            if (a[i] > a[j]) 
            {
                temp=  a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        printf("%d ",a[i]);
    }
    first=0;
    last=n-1;
    k=binarySearch(a,first,last,search);
    if(k==-1)
      printf("\n%d is not present in the given array",search);
    else
    {
        printf("\n%d is present at index %d in ascending order",search,k);
       for(i=0;i<n;i++)
       {
           if(b[i]==a[k])
            goto x;   
       }
       x:printf("\n%d is present at index %d in the given array",search,i);
    }
}
int binarySearch(int a[], int first, int last, int search) 
{ 
    while (first<=last)
    { 
        int middle=first+(last-first)/2; 
        if (a[middle] == search) 
            return middle; 
        if (a[middle] < search) 
            first = middle + 1; 
        else
            last = middle - 1;
    }
    return -1; 
} 