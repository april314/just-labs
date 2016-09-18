/*Проверить, является ли число n простым. Если нет вывести
любой делитель.*/
#include <stdio.h>
#include <math.h>

int is_prime(int n);

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
	
	if (is_prime(number))
	{
		printf("The number is prime\n");
	}
	
	return 0;
}

int is_prime(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			printf("Not prime, can be divided by %d\n", i);
			return 0;
		}
	}
	return 1;
}