#include <stdio.h>                                                                    
#include <stdlib.h>
struct data
{
    int s_no;
    char ch[10];
    int marks;
}info;
void main() 
{
   FILE *fp;
   fp=fopen("file.txt","w");
   if (fp == NULL)
   {
       printf("Unable to open file.\n");
       exit(1);
   }
   struct data info ={1,"19131A05B9",94};
   fwrite(&info, sizeof(struct data), 1, fp); 
   if(fwrite != 0)  
        printf("contents to file are written \n"); 
    else 
        printf("error writing file !\n"); 
   fclose(fp); 
   fp=fopen("file.txt","r");
   if (fp == NULL)
   {
       printf("Unable to open file.\n");
       exit(1);
   }
   while (fread(&info,sizeof(struct data),1,fp))
   {
       printf("S.No     Roll.No      Total Marks\n %d     %s        %d",info.s_no,info.ch,info.marks);
   }
   fclose(fp);
}
