#include<stdio.h>
#include<string.h>
void main()
{
    int l;
    char st[10],str[10],strn[20],m,m1,*p;
    scanf("%s",st);
    fflush(stdin);
    scanf("%c %c",&m,&m1);
    fflush(stdin);
    printf("The length of %s is %d\n",st,strlen(st));
    printf("The copied content of 'str' from 'st' is %s\n",strcpy(str,st));
    printf("The reverse of %s is %s\n",str,strrev(st));
    printf("Now st=%s and str=%s\n",st,str);
    printf("comparing two strings 'st' and 'str' ");
    strcmp(st,str)?printf("unequal\n"):printf("equal\n");
    printf("String after first %c is %s\n",m,strchr(st,m));
    printf("String after last %c is %s\n",m1,strrchr(st,m1));
    printf("concatenating two strings 'st' and 'str' is %s\n",strcat(st,str));
    printf("The lower case of %s is %s\n",st,strlwr(st));
    printf("The upper case of %s is %s\n",st,strupr(st));
    printf("The duplicate of %s is %s\n",str,strdup(str));
    printf("%s%s\n",st,str);
    printf("Half copied content %s\n",strncpy(strn,str,10));
    printf("%s\n",strn);
    printf("comparing two strings 'st' and 'strn' ");
    l=stricmp(strn,st);
    (l==0)?printf("same\n"):((l==-1)?printf("st is greater\n"):(printf("strn is greater\n")));
    printf("comparing two strings 'st' and 'strn' ");
    l=strncmp(strn,st,3);
    (l==0)?printf("same\n"):((l==-1)?printf("st is greater\n"):(printf("strn is greater\n")));
    printf("comparing two strings 'st' and 'strn' is ");
    l=strnicmp(strn,st,3);
    (l==0)?printf("same\n"):((l==-1)?printf("st is greater"):(printf("strn is greater")));
    printf("concatenating two strings 'st' and 'str' is %s\n",strncat(st,str,4));
    p=strstr(st,strn);
    p?printf("First occurance of %s in %s is %s",strn,st,p):printf("String not found");
}