#include<stdio.h>
void main()
{
    int n,p,i,x;
    scanf("%d%d",&n,&p);
    printf("Usage of break statement\n");
    for(i=0;i<n;i++)
    {
        if(i==p)
        break;
        else
        printf("%d ",i);
    }
    printf("\nUsage of continue statement\n");
    for(i=0;i<n;i++)
    {
        if(i==p)
        continue;
        else
        printf("%d ",i);
    }
    printf("\nUsage of goto statement\n");
    for(i=0;i<n;i++)
    {
        if(i==p)
        goto x;
        else
            printf("%d ",i);    
    }
    x:printf("\n");
    printf("Loop break");
}