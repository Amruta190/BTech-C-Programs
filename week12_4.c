#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
void main(int argc, char *argv[])
{
    FILE *fp;    
    int i = 0;
    int n=atoi(argv[2]);
    if( argc < 3 )
    {
        printf("Insufficient Arguments!!!\n");
    }     
    fp = fopen(argv[1],"r");
    if( fp == NULL )
    {
        printf("\n%s File can not be opened : \n",argv[1]);
    }
    fseek(fp,-n-2,SEEK_END);
    while( i<=n )
    {
        i++;
        printf("%c",fgetc(fp));
    }
    fclose(fp);    
}