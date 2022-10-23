#include <stdio.h>
/**
 * main - prints first 98 fibonacci numbers
 * starting with 1 and 2
 *
 * Return: 0
 */

int main(void)
{
	int count = 0;
	long int fib1 = 0, fib2 = 1, next;

	while (count < 99)
	{
		next = fib1 + fib2;

		printf("%li", next);

		if (count < 98)
		{
			printf(", ");
		}

		fib1 = fib2;
		fib2 = next;

		count++;
	}
	printf("\n");
	return (0);
}

