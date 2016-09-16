/*Найти наименьшее общее кратное двух чисел a и b.
0 ≤ a, b ≤ 10 9*/

#include <stdio.h>

int gcd(int a, int b);
int lcm (int a, int b);

int main()
{
	int a, b, gcdiv, lcmul;
	printf("Enter A = ");
	scanf("%d", &a);
	printf("Enter B = ");
	scanf("%d", &b);
	
	gcdiv = gcd(a, b);
	lcmul = lcm(a, b);
	
	printf("The common divisor is %d\n", gcdiv);
	printf("The common multiplier is %d", lcmul);
	return 0;
}

int lcm (int a, int b) 
{
	return a / gcd (a, b) * b;
}

int gcd (int a, int b) 
{
	if (b == 0)
		return a;
	else
		return gcd (b, a % b);
}