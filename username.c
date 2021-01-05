//username and password
#include<stdio.h>
#include<string.h>
void main()
{
    char username[20],password[10],str1[10],str2[10];
    printf("Enter the details :\n");
    printf("Username : ");
    scanf("%s",username);
    printf("Password : ");
    scanf("%s",password);
    if(strcmp(username,"Amruta"))
    {
        printf("Enter correct username or password");
    }
    else
    {
        if(strcmp(password,"ammu"))
          printf("Enter correct username or password");
        else
          printf("You are now logged in");
    }
    
}