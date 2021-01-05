#include<stdio.h>
int min(int , int );
int fibonacci(int , int [], int ); 
void main()
{
    int n,arr[n],i,k;
    printf("Enter the number of elements in an array : ");
    scanf("%d",&n);
    printf("Enter the elements in ascending order : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the key value : ");
    scanf("%d",&k);
    printf("Found at index %d",fibonacci(n,arr,k));
}
int min(int x, int y) 
{ 
    return (x<=y)? x : y; 
} 
int fibonacci(int n, int arr[], int k)
{
    int a=0,b=1,c;
    while(c<n)
    {
        a=b;
        b=c;
        c=a+b;
    }
    int offset = -1; 
    while (c > 1) 
    { 
        int i = min(offset+a, n-1); 
        if (arr[i] < k) 
        { 
            c  = b; 
            b = a; 
            a = c - b; 
            offset = i; 
        } 
        else if (arr[i] > k) 
        { 
            c  = a; 
            b = b - a; 
            a = c - b; 
        } 
        else return i; 
    } 
    if(b && arr[offset+1]==k)return offset+1; 
    return -1;  
}