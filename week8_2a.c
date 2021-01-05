#include<stdio.h>
void main()
{
    char st[20];
    int i,length=0;
    gets(st);
    for(i=0;st[i]!='\0';i++)
    {
       length++;
    }
    printf("String length is %d",length);
}