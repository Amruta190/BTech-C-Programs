#include<stdio.h>
void main()
{
    char *name[3]={"New Zealand","Australia","India"};
    int i;
    char *(*new)[i]=&name;
    for(i=0;i<3;i++)
    {
         printf("name[%d]=%s\n",i,(*new)[i]);
    }
}