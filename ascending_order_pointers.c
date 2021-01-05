#include<stdio.h>
void ascending(int,int*);
void main()
{
    int n=6;
    int arr[]={6,5,8,2,3,1};
    ascending(n,arr);
}
void ascending(int n,int *ptr)
{
    int i,j,temp;
    printf("Ascending Order:");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(ptr+j)<*(ptr+i))
            {
                temp=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    printf("%d ",*(ptr+i));
}