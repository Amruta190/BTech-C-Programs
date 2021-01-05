#include<stdio.h>
void main()
{
    int a,*p,*q;
    scanf("%d",&a);
    p=&a;
    q=&a;
    p=p+4;
    printf("Value is %d\n",*p);
    printf("Here as the addition is applied to pointer variable it displays the garbage value for 'a'\n");
    printf("Address is %d\n",p);
    printf("Pointer subtraction\n");
    p=p-4;
    printf("Value is %d\n",*p);
    printf("As the pointer again returned back to its first address it dispalys the value of 'a'\n");
    printf("Address is %d\n",p);
    printf("Pointer increment\n");
    p=++p;
    printf("Value of 'a' is %d\n",*p);
    printf("Here as the increment is applied to pointer variable it displays the garbage value for 'a'\n");
    printf("Address of 'a' is %d\n",p);
    printf("Pointer decrement\n");
    q=--q;
    printf("Value of 'a' is %d\n",*q);
    printf("Here as the decrement is applied to pointer variable it displays the garbage value for 'a'\n");
    printf("Address of 'a' is %d\n",q);
    printf("Pointer comparision\n");
    p-q>0?printf("Address of 'a' after increment is greater than Address of 'a' after decrement\n"):
    printf("Address of 'a' after decrement is greater than Address of 'a' after increment\n",*q,*p);
}