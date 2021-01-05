#include<stdio.h>
void main()
{
    int data,*ptr,**ptriptr;
    ptr=&data;
    ptriptr=&ptr;
    printf("Enter the value:");
    scanf("%d",&data);
    printf("The value is :%d\n",data);
    printf("Enter the value:");
    scanf("%d",ptr);
    printf("The value is:%d\n",*ptr);
    printf("Enter the value:");
    scanf("%d",*ptriptr);
    printf("The value is:%d\n",**ptriptr);
}