//Write a program to enter the numbers till the user wants and at the end, it should display the count of positive, negative and zeros entered.


#include<stdio.h>
#include<conio.h>
int main()
{
	int num,a=0,b=0,c=0,act=1;
	do
	{
		printf("\nEnter the integer : ");
		scanf("%d", &num);
		if(num==0)
			a++;
		if(num>0)
			b++;
		if(num<0)
			c++;
		
		printf("\n\nWant to anter another number? '1' for YES and '0' for NO : ");
		scanf("%d", &act);
	}while(act);
	
	printf("\n\nYou have entered %d positive, %d negative and %d zero integers.", b,c,a);
	getch();
	return 0;
}