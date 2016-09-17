/*Найти все натуральные числа, не превосходящие заданного n, двоичная запись
которых представляет собой последовательность троек нулей и единиц
(например: 111000111). Показать десятичную и двоичную запись этих чисел*/

#include <stdio.h>
#include <string.h>

int main()
{
	int number;
	
	printf("Enter a number (0 <= N <= 1,000,000,000): \n");
	scanf("%d", &number);
	
	while (number < 0 || number > 1000000000)
	{
		printf("Wrong number! Enter again: \n");
		scanf("%d", &number);
	}
	
	int result = 7;
	char binary[32] = "111\0";
	int odd = 0;
	printf("%d (10) \t= \t%s (2)\n", result, binary);
	result *= 8;

	while (result <= number)
	{
		if (odd)
		{
			strcat(binary, "111");
			odd = 0;
			printf("%d (10) \t= \t%s (2)\n", result, binary);
			result = result * 8;
		}
		else 
		{
			strcat(binary, "000");
			odd = 1;
			printf("%d (10) \t= \t%s (2)\n", result, binary);
			result = result * 8 + 7;
		}
		
		
	}
	
	return 0;
}