/*Найти целую часть квадр корня из целого N от 0 до 10^9*/

#include <stdio.h>
#include <math.h>

int main()
{
	int number;
	int result;
	printf("Enter a number (0 <= N <= 1,000,000,000): \n");
	scanf("%d", &number);
	
	while (number < 0 || number > 1000000000)
	{
		printf("Wrong number! Enter again: \n");
		scanf("%d", &number);
	}
	
	result = sqrt(number);
	printf("The integer part of a root of the number is %d", result);
	return 0;
}