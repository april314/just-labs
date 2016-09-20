/*Определить номер последнего числа Фибоначчи, которое входит в диапазон int.
Определить сумму первых чисел Фибоначчи, таких, что значение суммы не
превышает этого диапазона*/

#include <stdio.h>
#include <limits.h> //INT_MAX

int main()
{
	int first = 0;
	int second = 1;
	int next = 0;
	int i = 0;
	
	while (first <= INT_MAX && first <= second)
	{
		next = first + second;
		first = second;
		second = next;
		if (next > 0)
		{
			++i;
			//printf("%d - %d\n", i, next);
		}
	}
	
	printf("The number is %d\n", i);
	printf("The last sum is %d\n", first);
	
	return 0;
}