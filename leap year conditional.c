//*Write a program using conditional operators to determine 
//whether a year entered through the keyboard is a leap year or not.

#include <stdio.h>

int main()
{
    int year;
 
   
    printf("Enter any year: ");
    scanf("%d", &year);

    printf("%s",(year%4==0) ? 
                    "LEAP YEAR" : (year%400 ==0 ) ? 
                        "LEAP YEAR" : "NON LEAP YEAR");

    return 0;
}