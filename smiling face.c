//Write a program to fill the entire screen with a smiling face. The smiling face has an ASCII value 1


#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    char ch=1; 

    for(i=0;i<5;i++)
    {
        printf("%c", ch);
    }
    getch();
}