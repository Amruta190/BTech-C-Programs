#include<stdio.h>
#include<string.h>
void main()
{
    char name[10],str[10];
    scanf("%s",name);
    strcpy(str,name);
     if(strcmp(strrev(name),str)==0)
     printf("The expected output is palindrome");
     else
     printf("The expected output is not a palindrome");
}