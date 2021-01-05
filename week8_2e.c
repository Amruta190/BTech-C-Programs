#include<stdio.h>
void main()
{
    char st[20],str[20];
    int i,j,length=0;
    gets(st);
    gets(str);
    for(i=0;st[i]!='\0';i++)
    {
       length++;
    }
    i=length;
    j=0;
    while(str[j]!='\0')
    {
        st[i]=str[j];
        i++;
        j++;
    }
    st[i]='\0';
    puts(st);
}