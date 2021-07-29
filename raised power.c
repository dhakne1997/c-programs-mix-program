//Two numbers are entered through the keyboard. 
//Write a program to find the value of one number raised to the power of another.


#include <stdio.h>
int main()
{
    int a, b;
    double  pnum = 1;
    printf("Enter the value of A :");
    scanf("%d",&a);
    printf("Enter the value of B :");
    scanf("%d",&b);
    if (b > 0)
    {
        for (int i = b; i>0; i--)
            pnum = pnum * a;
    }
    else if(b < 0)
    {
        for(int i=b; i<0; i++)
            pnum = pnum/a;
    }

    printf("%d Raised to the Power of %d is %lf", a, b, pnum);

    return 0;
}