#include<stdio.h>
void main()
{
    int i;
    char s1[20];  
    gets(s1);
    fflush(stdin);
    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]>='a'&&s1[i]<='z')
        {
          s1[i]=s1[i]-32;
        }
        else if(s1[i]>='A'&&s1[i]<='Z')
        {
          s1[i]=s1[i]+32;
        }
    }
    printf("%s",s1);
}