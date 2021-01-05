#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    char file[50];
    char ch;
    int c,w,l;
    printf("Enter the file name : ");
    scanf("%s",file);
    fp=fopen(file,"r");
    if (fp==NULL)
    {
        printf("Unable to open file.\n");
        exit(0);
    }
    c=w=l=0;
    while((ch=fgetc(fp))!=EOF)
    {
       if(ch!=' ')
         c++;
       if(ch=='\n')
         c--;
       if(ch==' '||ch=='\t'||ch=='\n'||ch=='\0')
         w++;
       if(ch == '\n' || ch == '\0')
         l++;
    }
    if(c>0)
    {
        w++;
        l++;
    }
    printf("\nNumber of characters :");
    printf("%d\n",c);
    printf("Number of words :");
    printf("%d\n",w);
    printf("Number of lines :");
    printf("%d\n",l);
    fclose(fp);
}