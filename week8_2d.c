#include<stdio.h>
void main()
{
    char st[20],str[20];
    int i,flag=0;
    gets(st);
    gets(str);
    for(i=0;(st[i]&&str[i])!='\0';i++)
    {
        if (st[i]==str[i])
        {
          continue;
        }
        else
        {
            printf("Strings are not same");
            flag++;
            break;
        }   
    }
    if(flag==0)
    printf("Strings are same");
}