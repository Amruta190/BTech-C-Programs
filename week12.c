#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
void main(int argc, char *argv[])
{
    FILE *fp;    
    // int count = 0;
    int i = 0;
    int n=atoi(argv[2]);
    if( argc < 3 )
    {
        printf("Insufficient Arguments!!!\n");
        // printf("Please use \"program-name file-name\" format.\n");
        // return -1;
    }     
    fp = fopen(argv[1],"r");
    if( fp == NULL )
    {
        printf("\n%s File can not be opened : \n",argv[1]);
        // return -1;
    }
    //moves the file pointer to the end.
    fseek(fp,0,SEEK_END);
    //get the position of file pointer.
    // count = ftell(fp);
    while( /*i < count&&*/ i<n+2 )
    {
        i++;
        fseek(fp,-i,SEEK_END);
        printf("%c",fgetc(fp));
    }
    // printf("\n");
    fclose(fp);    
    // return 0;
}