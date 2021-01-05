#include<stdio.h>
void main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x<y)
    {
        if(x<z&&z<y)
        printf("Key value is between the limits");
        else
        printf("Key value is not between the limits");
        
    }
    else
    {
        if(y<z&&z<x)
        printf("Key value is between the limits");
        else
        printf("Key value is not between the limits");
    }
}