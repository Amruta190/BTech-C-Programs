#include<stdio.h>
#include<string.h>
void main()
{
    char st[10],str[10];
    gets(st);
    gets(str);
    // printf("String length is %d\n",strlen(st));
    // printf("String copied is %s\n",strcpy(str,st));
    // printf("String reversed is %s\n",strrev(st));
    // printf("Now st=%s and str=%s\n",st,str);
    // printf("comparing two strings 'st' and 'str' ");
    //  strcmp(st,str)?printf("Strings are not same\n"):printf("Strings are same\n");
    printf("%s\n",strcat(st,str));
}