#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,d;
    float e,f,g,h;
    scanf("%d%d%d",&a,&b,&c);
    if(a==0)
    printf("It is not a quadratic equation");
    else
    {
        d=(b*b)-(4*a*c);
        if(d==0)
        {
            e=(-b/2*a);
            printf("Nature of the roots is real and equal\nroot1=root2=%f",e);
        }
        else
        {
            if(d>0)
            {
            f=(-b-sqrt(d))/(2*a);
            g=(-b+sqrt(d))/(2*a);
            printf("Nature of the roots is real and distinct\nroot1=%f and root2=%f",f,g);
            }
            else
            {
            printf("Nature of the roots are imaginary\n");
            e=(-b/(2*a));
            h=(sqrt(-d))/(2*a);
            printf("root1=%f+i%f and root2=%f-i%f",e,h,e,h);
            }
        }
    } 
}