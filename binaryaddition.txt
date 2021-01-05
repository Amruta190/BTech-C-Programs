//adding two binary numbers gives result in decimal form
#include<stdio.h>
#include<math.h>
int bin(int);
void main()
{
    int n,m,num1,num2;
    printf("Enter two binary numbers : ");
    scanf("%d%d",&m,&n);
    num1=bin(m);
    num2=bin(n);
    printf("Their decimal addition is : %d",num1+num2);
}
int bin(int k)
{
    int count=0,i,sum=0,a,b;
    a=k;
    while(k>0)
    {
        k=k/10;
        count++;
    }
    for(i=0;i<count;i++)
    {
        b=a%10;
        sum=sum+b*pow(2,i);
        a=a/10;
    }
    return sum;
}