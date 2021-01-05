#include<stdio.h> 
int main() 
{  int n,a[30],s=0,c=0,i,j=1,k,t;
  scanf("%d",&t);
  for(k=1;k<=t;k++)
  {  
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     { a[i]=i; 
     }
     while(s<n&&j<=n)
     { s=s+a[j];
       c++;
       j++;
     }
     printf("%d\n",c);
   }
}