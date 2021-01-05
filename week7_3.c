#include<stdio.h>
void main()
{
    int i,c=0,flag=0;
    char n,st[30];
    gets(st);
    for(i=0;st[i]!='\0';i++)
    {
        n=st[i];
        c++;
    }
    for(i=0;i<c/2;i++)
    {
        if(st[i]==st[c-1-i])
        continue;
        else  
        { 
         flag=1;
        } 
    } 
    if(flag==0)
    printf("The given String is palindrome");
    else
    printf("The given String is not palindrome");
}