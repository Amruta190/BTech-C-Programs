#include<stdio.h>
void main()
{
    int i;
    char s1[20],s2[20];  
    scanf("%s%s",s1,s2);
    
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
    for(i=0;s2[i]!='\0';i++)
    {
        if(s2[i]>='a'&&s2[i]<='z')
        {
          s2[i]=s2[i]-32;
        }
        else if(s2[i]>='A'&&s2[i]<='Z')
        {
          s2[i]=s2[i]+32;
        }
    }
    printf("%s %s",s1,s2);
}