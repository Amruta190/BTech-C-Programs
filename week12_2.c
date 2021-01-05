#include <stdio.h> 
#include <stdlib.h> 
void main() 
{ 
    FILE *fp1, *fp2; 
    char file[100], c; 
    printf("Enter the name of the file to be opened for reading :"); 
    scanf("%s", file); 
    fp1 = fopen(file, "r"); 
    if (fp1 == NULL) 
    { 
        printf("Unable to open file %s \n", file); 
        exit(0); 
    } 
    printf("Enter the name of the file to open for copying the content :"); 
    scanf("%s", file);  
    fp2 = fopen(file, "w"); 
    if (fp2 == NULL) 
    { 
        printf("Unable to open file %s \n", file); 
        exit(0); 
    } 
    c = fgetc(fp1); 
    while (c != EOF) 
    { 
        fputc(c, fp2); 
        c = fgetc(fp1); 
    } 
    printf("\nContents copied to %s",file); 
    fclose(fp1); 
    fclose(fp2);
}