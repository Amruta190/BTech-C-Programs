#include<stdio.h>
void main()
{
    float c,f,g,h;
    scanf("%f%f" ,&c,&f);
    g=(c*(1.8))+32;
    h=(f-32)/1.8;
    printf("%f\n%f" ,g,h);
}