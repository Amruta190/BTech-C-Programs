#include<stdio.h>
void main()
{
    int a,c,e,g;
    float b,h,f,d;
    scanf("%d%f" ,&a,&b);
    g=a;
    h=b;
    c=a++;
    printf("%d\n" ,c);
    d=++b;
    printf("%f\n" ,d);
    e=g--;
    printf("%d\n" ,e);
    f=--h;
    printf("%f\n" ,f);
}