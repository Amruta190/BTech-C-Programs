#include<stdio.h>
#include<stdlib.h>
void main()
{
    char ch;
    FILE *fp;
    char file[50];
    printf("Enter the file name : ");
    scanf("%s",file);
    fp=fopen(file,"r");
    if (fp==NULL)
    {
        printf("Unable to open file.\n");
        exit(0);
    }
    printf("Reading the contents of the file\n");
    while((ch=fgetc(fp))!=EOF)
    {
       printf("%c",ch);
    }
    printf("\nAll the contents in the file have been read\n");
    fclose(fp);
}