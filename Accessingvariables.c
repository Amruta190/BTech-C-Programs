#include<stdio.h>
void main()
{
    char b;
    int a;
    float c;
    scanf("%c%d%f",&b,&a,&c);
    printf("The char value read is %c.\nThe integer value read is %d.\nThe float value read is %.2f.\n",b,a,c);
}