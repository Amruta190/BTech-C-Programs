#include<stdio.h>
int add(int*,int*);
int subtract(int*,int*);
void main()
{
   int a,b,*p,*q,s,s1,*r,*r1;
   scanf("%d %d",&a,&b);
   r=&s;
   r1=&s1;
   s=add(&a,&b);
   s1=subtract(&a,&b);
   printf("Addition is %d\n",*r);
   printf("Subtraction is %d\n",*r1);
}
int add(int *p,int *q)
{
    int s,*r;
    s=*p+*q;
    return s;
}
int subtract(int *p,int *q)
{
    int s1,*r;
    s1=*p-*q;
    return s1;
}

