#include<stdio.h>
int stringToInteger(char[]);
int stringLength(char[]);
int isNumber(char[]);
void main()
{
    int m=0,m1=0,num1,num2;
    char st[10],str[10];
    gets(st);
    gets(str);
    num1=isNumber(st);
    num2=isNumber(str);
    if (num2&&num1)
    {
      m=stringToInteger(st);
      m1=stringToInteger(str);
      if(st[0]=='-'&&str[0]=='-')
      printf("The sum of two given strings %s and %s is -%d\n",st,str,m+m1);
      else
      printf("The sum of two given strings %s and %s is %d\n",st,str,m+m1);
    }
    else
    printf("Enter correct input");
}
int isNumber(char st[])
{
    int i,num=0;
    for(i=0;st[i]!='\0';i++)
    {
        num=0;
        if(st[i]>='0'&&st[i]<='9'||st[i]=='-'||st[i]==' ')
        num=1;
        else
        {
          break;
        }
    }
    return num;
}
int stringToInteger(char st[])
{
    int c=0;
    c = stringLength(st);
    int digit,i,j=1,m=0;
    if(st[0]=='-')
    {
        for(i=c-1;i>0;i--)
       {
           digit=st[i];
           digit=digit-48;
           m=m+(digit*j);
           j=j*10;
       }
    }
    else if(st[0]==' ')
    {
        m=0;
    }
    else
    {
       for(i=c-1;i>=0;i--)
       {
           digit=st[i];
           digit=digit-48;
           m=m+(digit*j);
           j=j*10;
       }
    }
    return m;
}
int stringLength(char st[])
{
    int i,c=0;
   for(i=0;st[i]!='\0';i++)
    {
        c++;
    } 
    return c;
}