#include<stdio.h>
void main()
{
    char name[12],a;
    int c=0,i=0;
    printf("Enter name\n");
    scanf("%s",name);
    do
    {
        a=name[i];
        c++;
        i++;
    } while(name[i]!='\0');
    printf("length=%d",c);
}