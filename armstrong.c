//Write a program to print out all Armstrong numbers between 1 and 500. If sum of cubes of each digit of the number is equal to the number itself, then the number is called an Armstrong number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int check = 0, i, k, ans;
	for(i = 1; i <= 500; i++ )
	{
		k = i;
		ans = 0;
		while(k)
		{
			check = k%10;
			check = pow(check, 3);
			ans += check; 
			k /= 10;
		}
		if(i == ans)
			printf("%d, ", ans);
	}
	printf("are the armstrong numbers between 1 and 500.");
	getch();
	return 0;
}