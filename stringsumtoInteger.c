#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char st[10],str[10];
    scanf("%s%s",st,str);
    printf("The sum of two given strings %s and %s is %d",st,str,atoi(st)+atoi(str));
}