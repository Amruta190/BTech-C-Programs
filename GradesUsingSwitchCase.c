#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,A;
    scanf("%d%d%d" ,&a,&b,&c);
    A=(a+b+c)/3;
    switch(A/10)
    {
           case 10:/*A is equal to 100*/
                  printf("grade is A");
                  break;
           case 9:/*A between 90-99*/
                  printf("grade is A");
                  break;
           case 8:/*A between 80-89*/
                  printf("grade is B");
                  break;
           case 7:/*A between 70-79*/
                  printf("grade is B");
                  break;
           case 6:/*A between 60-69*/
                  printf("grade is C");
                  break;
           case 5:/*A between 50-59*/
                  printf("grade is C");
                  break;
           case 4:/*A between 40-49*/
                  printf("grade is D");
                  break;
           case 3:/*A between 30-39*/
                  printf("grade is D");
                  break;
           default :/*A less than 30*/
                  printf("student failed");         
    }
}    