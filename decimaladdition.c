//adding two decimal numbers gives result in binary form
#include<stdio.h>
void main()
{
    int i,m,n,a,b,f,count=0 ;
    printf("Enter the two decimal numbers: ");
    scanf("%d%d",&m,&n);
    a=m+n;
    f=a;
    while (a>0)
    {
        a=a/2;
        count++;
    }
    int x[count];
    printf("Their binary addition is : ");
    for(i=count-1;i>=0;i--)
    {
        b=f%2;
        x[i]=b;
        f=f/2;
    }
    for(i=0;i<=count;i++)
    {
        printf("%d",x[i]);
    }
}