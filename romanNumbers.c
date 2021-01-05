#include <stdio.h>
void romanNumber(int);
void  main( )
{
 int year;
 printf("Enter the year to get it in romanNumber : ");
 scanf("%d", &year);
 printf("Roman equivalent of %d is ",year);
 romanNumber(year);
}
void romanNumber(int year)
{
 if (year >= 1000)
 {
  printf("m");
  romanNumber(year - 1000);
 }
 else if (year >= 500)
 {
  printf("d");
  romanNumber(year - 500);
 }
 else if (year >= 100)
 {
  printf("c");
  romanNumber(year - 100);
 }
 else if (year >= 50)
 {
  printf("l");
  romanNumber(year - 50);
 }
 else if (year >= 10)
 {
  printf("x");
  romanNumber(year - 10);
 }
 else if (year >= 5)
 {
  printf("v");
  romanNumber(year - 5);
 }
 else if (year >= 1)
 {
  printf("i");
  romanNumber(year - 1);
 }
}