/*С клавиатуры вводится целое число n из промежутка [100, 9999]. Если число
четырехзначное, то найти сумму его цифр, а если трехзначное, то произведение
цифр числа*/

#include <stdio.h>
#include <stdlib.h> //size_t
#include <string.h>

int main()
{
	char buffer[5];
	size_t characters;
	
	printf("Enter a number (100 - 9999)\n");
	scanf("%s", buffer);
	while (strcmp(buffer, "100") < 0 || strcmp(buffer, "9999") > 0)
	{
		printf("Enter a number (100 - 9999)\n");
		scanf("%s", buffer);
	}
	
	if (strlen(buffer) == 4)
	{
		int sum = 0;
		int i;
		for (i = 0; i < 4; i++)
		{
			sum += buffer[i] - '0';
		}
		printf("The sum = %d", sum);
	}
	else
	{
		int mult = 1;
		int i;
		for (i = 0; i < 3; i++)
		{
			mult *= buffer[i] - '0';
		}
		printf("The mult = %d", mult);
	}
	
	return 0;
}