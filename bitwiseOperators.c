#include<stdio.h>
void main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\n%d\n%d\n%d\n%d\n%d\n",a&b,a|b,a^b,~a,a<<2,b>>2);
}