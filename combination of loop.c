/*C Program to add first seven terms of the following series using a for loop: 1 /1! + 2/2! + 3/3!......*/


#include<stdio.h>
int main()
{
	int i, j, n;
	float fact = 1, sum = 0, div; 
	for (i = 1; i <= 7; i++)
	{
		fact = 1;
		for (j = 1; j <= i; j++)
		{
			fact *= j;
		}
		div = i / fact;
		sum += div;
	}
	printf("\nSum of First Seven Terms : %5.2f", sum);
	return 0;
}