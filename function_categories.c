#include<stdio.h>
void add(void);
void add1(int,int);
int add2(void);
int add3(int,int);
void main()
{
    add();
    int c,d;
    scanf("%d%d",&c,&d);
    add1(c,d);
    int f;
    f=add2();
    printf("sum is %d",f);
    int i,j,k;
    scanf("%d%d",&i,&j);
    k=add3(i,j);
    printf("sum is %d",k);
}
void add(void)
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("sum is %d",a+b);
}
void add1(int c,int d)
{
    int e;
    e=c+d;
    printf("sum is %d",e);
}
int add2(void)
{
    int g,h,f;
    scanf("%d%d",&g,&h);
    f=g+h;
    return(f);
}
int add3(int i,int j)
{
    int k;
    k=i+j;
    return(k);
}