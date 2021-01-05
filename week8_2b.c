#include<stdio.h>
void main()
{
    char st[20]="Hello",str[20];
    int i;
    gets(str);
    for(i=0;st[i]!='\0',str[i]!='\0';i++)
    {
        st[i]=str[i];
    }
    printf("String copied is ");
    puts(st);
}