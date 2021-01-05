#include<stdio.h>
void lcm(void);
void main()
{
    lcm();
}
void lcm(void)
{
    int i,j,m;
    scanf("%d%d",&i,&j);
    if(i==0||j==0)
    printf("lcm is undefined");
    else
    {
        m=(i>j)?i:j;
        while(m>0&&m<=i*j)
        {
            if(m%i==0&&m%j==0)
            {
          printf("lcm is %d",m);
          break;
            }
        else
        {
            m++;
        }
        } 
    }
}