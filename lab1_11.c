/*Определить k-ю
цифру последовательности 182764125216343… , в которой
выписаны подряд кубы натуральных чисел.
1 ≤ k ≤ 10 3*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int k;
	int i = 1;
	int cube;
	
	char buf[20];
	char buffer[1000] = "\0";
	
	printf("Enter a number (0 <= k <= 1,000): \n");
	scanf("%d", &k);
	while (k < 0 || k > 1000)
	{
		printf("Wrong number! Enter again: \n");
		scanf("%d", &k);
	}
	
	while (strlen(buffer) <= k)
	{
		cube = i*i*i;
		strcat(buffer, itoa(cube, buf, 10));
		++i;
	}
	
	printf("The k-th element in the sequence 182764125216343... is %c\n", buffer[k-1]);
	
	return 0;
}