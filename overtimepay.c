/*Write a program to calculate overtime pay of 10 employees. 
Overtime is paid at the rate of Rs. 12.00 per hour for every hour worked above 40 hours. 
Assume that employees do not work for fractional part of an hour.*/


#include<stdio.h>
#include<conio.h>
int main()
{
	int i,hr, bonus;
	for(i = 1 ; i <= 10 ; i++) 
	{
		printf("\nEnter the working hour of the employ : ");
		scanf("%d", &hr);
		
		if(hr>40)
		{
			bonus = (hr - 40)*12;
			printf("\n%d Rs. is the bonus of the employ.\n\n", bonus);
		}
		else
			printf("\nThis employ has not done overtime.\n\n");
	}
	getch();
	return 0;
}