#include<stdio.h>
void main()
{
    char name[100],ch;
    printf("Enter the string : ");
    gets(name);
    printf("Enter the character that should be placed inplace of vowels : ");
    scanf("%c",&ch);
    fflush(stdin);
    int i;
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||
        name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U')
        {
            name[i]=ch;
        }
        printf("%c",name[i]);
    }
}