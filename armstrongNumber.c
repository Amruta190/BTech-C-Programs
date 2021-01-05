#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,c=0,r,sum=0,g,h;
    scanf("%d",&n);
    g=n;
    h=n;
    c=0;
    while(n>0)
    {
       n=n/10;
       c++;
    }
    i=0;
    while(h>0)
    {
        r=h%10;
        sum=sum+pow(r,c);
        h=h/10;
    }
    printf("%d",sum);
    if(g==sum)
    printf("\nIt is an armstrong number");
    else
    {
        printf("\nIt is not an armstrong number");
    }
    
}