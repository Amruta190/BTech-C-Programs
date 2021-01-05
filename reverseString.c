#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter length of string : ");
    scanf("%d",&n);
    char name[n];
    printf("Enter the string: ");
    scanf("%s",name);
    for(i=n-1;name[i]!=0,i>=0;i--)
     {
         printf("%c",name[i]);
     }
}