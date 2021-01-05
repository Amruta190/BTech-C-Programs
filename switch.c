#include<stdio.h>
void main()
{
    int a,b;
    char d;
    scanf("%d %d %c" ,&a,&b,&d);
    switch(d)
    {
        case '+':printf("sum is %d" ,a+b);
                break;
        case '-':printf("difference is %d" ,a-b);
                break;
        case '*':printf("product is %d" ,a*b);
                break;
        case '/':printf("quotient is %d" ,a/b);
                break;
        case '%':printf("remainder is %d" ,a%b);
                break;
        default :printf("no other arithematic operations are present");                                         
    }
}    