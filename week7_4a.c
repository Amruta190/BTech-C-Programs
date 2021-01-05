#include<stdio.h>
#include<stdlib.h>
void main()
{
    char st[20],str[20];
    gets(st);
    gets(str);
    int a,b;
    a=atoi(st);
    b=atoi(str);
    if(b==0)
    {
      if(str[0]=='0'||str[0]=='\0')
        printf("The sum of two given strings %s and %s is %d\n",st,str,a+b);
      else
        printf("Enter correct input");
    }
    else
    {
      printf("The sum of two given strings %s and %s is %d\n",st,str,a+b);   
    }
}