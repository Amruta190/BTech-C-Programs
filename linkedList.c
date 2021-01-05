#include<stdio.h>
struct node
{
    int data;
    struct node*prev_link;
    struct node*next_link;
};
void main()
{
    struct node ob1;
    ob1.prev_link=NULL;
    ob1.data=10;
    struct node ob2;
    ob2.data=30;
    struct node ob3;
    ob3.data=50;
    ob3.next_link=NULL;
    ob1.next_link=&ob2;
    ob2.next_link=&ob3;
    ob2.prev_link=&ob1;
    ob3.prev_link=&ob2;
    printf("%d\n",ob1.next_link->data);
    printf("%d\n",ob2.next_link->data);
    printf("%d\n",ob2.prev_link->data);
    printf("%d\n",ob3.prev_link->data);
}