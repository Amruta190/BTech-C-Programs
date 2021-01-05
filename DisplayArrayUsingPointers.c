#include<stdio.h>
#define MAX_SIZE 10
int main(void)
{
   int ary[]={1,3,4,8,9,5,6,7,2,11,12};
   int *pwalk;
   int *pend;
   printf("Array Forward:");
   for(pwalk=ary,pend=ary+MAX_SIZE;pwalk<pend;pwalk++)
   {
       printf("%3d",*pwalk);
   }
   printf("\n");
   printf("Array Backward:");
   for(pwalk=pend-1;pwalk>=ary;pwalk--)
   {
       printf("%3d",*pwalk);
   }
   printf("\n");
   return 0;
}