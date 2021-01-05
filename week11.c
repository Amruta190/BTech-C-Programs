#include<stdio.h>
struct student
{
    char name[10];
    int age;
    char branch[4];
    char roll[10];
};
void main()
{
    struct student stu;         
    struct student *ptr_stu;
    ptr_stu=&stu;
    printf("Enter Name , Age , RollNo , Branch :\n");
    scanf("%s\n%d\n%s\n%s",ptr_stu->name,&ptr_stu->age,ptr_stu->roll,ptr_stu->branch);
    printf("Name:%s\nAge:%d\nRoll-No:%s\nBranch:%s\n",ptr_stu->name,ptr_stu->age,ptr_stu->roll,ptr_stu->branch); 
}