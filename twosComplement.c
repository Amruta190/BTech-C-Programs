#include<stdio.h>
void main()
{
    int n,k,b,i,p,count=0,c[count],carry=1;
    printf("Enter a binary number : ");
    scanf("%d",&n);
    k=n;
    p=n;
    while (k>0)
    {
        k=k/10;
        count++;
    }
    int a[count];
    for(i=count-1;i>=0;i--)
    {
        b=n%10;
        a[i]=b;
        n=n/10;
    } 
    for(i=0;i<count;i++)
    {
        if(a[i]==0)
         a[i]=1;
        else
         a[i]=0;
        c[i]=a[i];
    }
    if(a[count-1]==0)
    {
       printf("The 2's complement of %d is : ",p);
       for(i=0;i<count-1;i++)
       {
           printf("%d",a[i]);
       }
       printf("1");
    }
    else if(a[count-1]!=0)
    {
        printf("The 2's complement of %d is : ",p);
        for(i=count-2;i>=0;i--)
        {
           if(a[i]==1&&carry==1)
              c[i]=0;
           if(a[i]==0&&carry==1)
           {
              c[i]=1;
              carry=0;
           }
        }
        for(i=0;i<count-1;i++)
        {
           printf("%d",c[i]);
        }
        printf("0");
    }
}