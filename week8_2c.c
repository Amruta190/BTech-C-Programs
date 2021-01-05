#include<stdio.h>
void main()
{
    char st[20];
    int i,j,temp,length=0;
    gets(st);
    for(i=0;st[i]!='\0';i++)
    {
        length++;
    }
    i=0;
    j=length-1;
    while(i<j)
    {
        temp=st[i];
        st[i]=st[j];
        st[j]=temp;
        i++;
        j--;
    }
    printf("String reversed is ");
    puts(st);
}