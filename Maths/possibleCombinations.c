#include<stdio.h>
#include<math.h>
void decimalToBinary(int, int);
void main()
{
    int i,n,k;
    printf("Enter the number of statements: ");
    scanf("%d",&n);
    int x[n];
    k=pow(2,n);
    for (i=0;i<k;i++)
    {
       decimalToBinary(i,n);
    }
}
void decimalToBinary(int i, int n)
{
    int b=0,x[n],j;
    for (j=n-1;j>=0;j--)
    {
        b=i%2;
        x[j]=b;
        i=i/2;
    }
    for(j=0;j<n;j++)
    {
        if(x[j])
        printf(" F ");
        else
        printf(" T ");
    }
    printf("\n");
}