#include<stdio.h>
int bitScore(int);
void main()
{
    int N,temp=0,count=0,temp2=0;
    scanf("%d",&N);
    int arr[N],i,bsarr[N],num[10] = {0,0,0,0,0,0,0,0,0,0};
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
        bsarr[i]=bitScore(arr[i]);
        
    }
    for(i=0;i<N;i++)
    {
        temp=bsarr[i];
        temp2=num[temp];
        temp2+=1;
        num[temp]=temp2;
        
    }   
    for(i=0;i<10;i++)
    {
        
        if(num[i]==2)
        count++;
        if(num[i]>2)
        count+=2;
    } 
    printf("%d",count);
    
}
int bitScore(int n)
{
    int i,a,b,c,h,l;
    a = n % 10;
    n=n/10;
    b = n % 10;
    n=n/10;
    c =n;
    h=((a>b)&&(a>c))?a:((b>c)?b:c);
    l=((a<b)&&(a<c))?a:((b<c)?b:c);
    b=h*11+l*7;
    b=b%100;
    return b/10;
}