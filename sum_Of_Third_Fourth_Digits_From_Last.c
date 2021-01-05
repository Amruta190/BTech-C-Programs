#include<stdio.h>
void main()
{
  int a,b,c,n,d;
  scanf("%d",&n);
  a=n/10;
  a=a/10;
  b=a%10;
  c=a/10;
  d=c%10;
  printf("%d",b+d);
}