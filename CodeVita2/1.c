#include<stdio.h>
int main()
{
    int n,i,k=0,j,count=0,count1=0;
    char st1[10000],st2[10000],r='r',m='m';
    scanf("%d",&n);
    int q=n;
    scanf("%s %s",st1,st2);
    for(i=0;i<n;i++)
    {
      if(st1[i]==r) 
      {
          count=0;
          for(j=0;j<n;j++)
          {
              
              if(st2[j]==r)
              {
                  k++;
                  st2[j]='j';
                  break;
              }
              else
              count++;
          }
        if(count==n)
        break;
      } 
      else if(st1[i]==m)
      {
          count1=0;
          for(j=0;j<n;j++)
          {
              
              if(st2[j]==m)
              {
                  k++;
                  st2[j]='j';
                  break;
              }
              else
              count1++;
          }
        if(count1==n)
        break;
      } 
    }
    printf("%d",q-k);
}