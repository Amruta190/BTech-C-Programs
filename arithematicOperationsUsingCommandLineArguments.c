#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
    int a,b;
    char d[1];
    strcpy(d,argv[3]);
    a=atoi(argv[1]);
    b=atoi(argv[2]);
    if(argc<4)
    {
        printf("Format is value1 value2 operator");    
    }
    switch(d[0])
    {
        case '+':printf("sum is %d" ,a+b);
                break;
        case '-':printf("difference is %d" ,a-b);
                break;
        case 'x':printf("product is %d" ,a*b);
                break;
        case '/':printf("quotient is %d" ,a/b);
                break;
        case '%':printf("remainder is %d" ,a%b);
                break;
        default :printf("no other arithematic operations are present");                                         
    }
}