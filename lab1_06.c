/*Определить k-ю
цифру последовательности 14916253649..., в которой выписаны
подряд квадраты натуральных чисел.
1 ≤ k ≤ 10^3*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int k;
	int i = 1;
	int sqr;
	
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
		sqr = i*i;
		strcat(buffer, itoa(sqr, buf, 10));
		++i;
	}
	
	printf("The k-th element in the sequence 1491625... is %c\n", buffer[k-1]);
	
	return 0;
}