#include<stdio.h>
int main()
{
    char a,b;
    int c;
    printf("enter two numbers");
    scanf("%c" ,&a);
    fflush(stdin);
    scanf("%c" ,&b);
    c=a+b;
    printf("The addition is %d\n" ,c);
    c=a-b;
    printf("The difference is %d\n" ,c);
    c=a*b;
    printf("The product is %d\n" ,c);
    c=a/b;
    printf("The quotient is %d\n" ,c);
    c=a%b;
    printf("The remainder is %d\n" ,c);
    return 0;
}