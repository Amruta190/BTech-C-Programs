#include<stdio.h>
void main()
{
    char name[100];
    gets(name);
    fflush(stdin);
    int i,j,length=0;
    for ( i = 0; name[i] !='\0' ; i++)
    {
        length++;
    }
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||
        name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U')
        {
            for(j=i;j<length;j++)
            {
                name[j]=name[j+1];
            }
            length--;
        }
    }
    printf("%s",name);
}