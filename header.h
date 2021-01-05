int fact(int n)
{
    int f=1,i;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return(f);
}
int fact_rec(int x)
{
    if(x==0||x==1)
    return(1);
    else
    {
        return(x*fact_rec(x-1));
    }
} 
int prime(int n)
{
    int i,count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==2)
    return 1;
    else
    return 0;    
}