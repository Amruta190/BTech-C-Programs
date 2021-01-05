#include<stdio.h>
void main()
{
    char a;
    scanf("%c",&a);
    if((a>='A'&&a<='Z')||(a>='a'&&a<='z'))
    {
        if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U'||a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
        printf("%c is a vowel",a);
        else
        printf("%c is a consonant",a);
    }
    else
    {
    if(a>='0'&&a<='9')
    printf("%c is a digit",a);
    else
    printf("%c is a special symbol",a);
    }
}