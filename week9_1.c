#include<stdio.h>
void main()
{
    int *p,a;
    float *q,b;
    char *r,c;
    printf("Read the values of 'integer a','float b','char c':");
    scanf("%d %f %c",&a,&b,&c);
    p=&a;
    printf("\nAddress and value of 'a' are %d and %d\n",&a,a);
    printf("Address and value of 'pointer' are %d and %d\n",p,*p);
    q=&b;
    printf("Address and value of 'b' are %d and %f\n",&b,b);
    printf("Address and value of 'pointer' are %d and %f\n",q,*q);
    r=&c;
    printf("Address and value of 'c' are %d and %c\n",&c,c);
    printf("Address and value of 'pointer' are %d and %c\n",r,*r);
}