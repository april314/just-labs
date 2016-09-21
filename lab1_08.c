/* Найти и распечатать все натуральные трехзначные числа меньшие n, равные
сумме кубов своих цифр */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cube(int n);

int main()
{
	int n;
	char number[4];
	int i = 100;
	
	printf("Enter a number (100 <= N <= 999): \n");
	scanf("%d", &n);
	
	if (n < 100)
	{
		printf("No three-digit numbers below that! Enter again: \n");
		scanf("%d", &n);
	}
	else if (n > 999)
	{
		printf("Wrong number! Enter again: \n");
		scanf("%d", &n);
	}
	printf("The numbers are:\n");
	while (i < n)
	{
		itoa(i, number, 10);
		
		if ( i == (cube(number[0] - '0') + cube(number[1] - '0') + cube(number[2] - '0')))
		{
			printf("%d\n", i);
		}			
		
		++i;
	}
	
	return 0;
}

int cube(int n)
{
	return n*n*n;
}