#include<stdio.h>
void main()
{
   int big, a= -10, b= -56, c= -34 ;
    big = ( a > b ? ( a > c ? 3: 4 ) : ( b > c ? 6: 8 ) ) ;
    printf("%d",big);
}