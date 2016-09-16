/*Найти количество уникальных простых делителей числа n*/
#include <stdio.h>
#include <math.h>

int is_prime(int n);

int main()
{
	int number;
	int divisor = 2;
	int counter = 0;
	
	printf("Enter a number (0 <= N <= 1,000,000,000): \n");
	scanf("%d", &number);
	while (number < 0 || number > 1000000000)
	{
		printf("Wrong number! Enter again: \n");
		scanf("%d", &number);
	}
	
	//если число простое, то простой делитель только один
	if (is_prime(number))
	{
		++counter;
	}
	//иначе проверяем делители по порядку
	else
	{
		while(divisor <= (number / 2))
		{
			if (number % divisor == 0 && is_prime(divisor))
			{
				++counter;
			}
			++divisor;
		}
	}
	
	printf("The number %d has %d prime divisors\n", number, counter);
	
	return 0;
}

int is_prime(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}