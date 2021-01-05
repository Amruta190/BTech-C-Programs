#include<stdio.h>
int lcm(int,int);
void main()
{
    int i,n,a[10],k,m;
    printf("Enter the no.of elements in an array : ");
    scanf("%d",&n);
    if(n<2)
    printf("Enter atleast two elements");
    else
    {
       printf("Enter the array elements : ");
       for(i=0;i<n;i++)
        {
           scanf("%d",&a[i]);
        }
        for (i=0;i<n;i++)
        {
           if(a[i]==0||a[i]<0)
           {
              printf("lcm is undefined\n");
              printf("Enter positive integers without zero");
              break;
           }
           else
           {
               m=lcm(a[0],a[1]);
               for(i=2;i<n;i++)
               {
                  m=lcm(m,a[i]);
               }
               printf("LCM is %d",m);
           }
       }
    }
}
int lcm(int p,int q)
{
    int m;
    m=(p>q)?p:q;
    while(m>0&&m<=p*q)
    {
        if(m%p==0&&m%q==0)
        {
            break;
        }
        else
        {
            m++;
        }
    } 
    return m;
}