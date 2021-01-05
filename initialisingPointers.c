#include<stdio.h>
int main()
{
int num,*intptr;
float x, *floptr;
char ch, *cptr;
num=123;
x=12.34;
ch='a';
intptr=&num;
cptr=&ch;
floptr=&x;
printf("%d\n",*intptr);
printf("%u\n",*floptr);
printf("%d\n",*cptr);
}