#include<stdio.h>
#include "header.h"
void main()
{
    int n,f,c,g,h;
    scanf("%d",&n);
    g=fact(n);
    printf("fact is %d\n",g);
    h=fact_rec(n);
    printf("fact_rec is %d\n",h);
    c=prime(n);
     if(c==1)
     printf("It is prime\n");
     else
     printf("It is not a prime\n");
}