#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers
 * starting with 1 and 2
 *
 * Return: 0
 */

int main(void)
{
	int count = 1;
	long int fib_1 = 0, fib_2 = 1, sum;

	while (count < 51)
	{
		sum = fib_1 + fib_2;
		printf("%li", sum);

		fib_1 = fib_2;
		fib_2 = sum;

		if (count < 50)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
		count++;
	}
	return (0);
}
