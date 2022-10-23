#include <stdio.h>
/**
 * main - finds and prints even-valued terms of fibonacci
 * whose values do not exceed 4,000,000
 *
 * Return: 0
 */

int main(void)
{
	long int fib1 = 0, fib2 = 1, fib_sum, evenSum = 0;

	while (1)
	{
		fib_sum = fib1 + fib2;

		if (fib_sum > 4000000)
		{
			break;
		}

		if ((fib_sum % 2) == 0)
		{
			evenSum += fib_sum;
		}
		fib1 = fib2;
		fib2 = fib_sum;
	}
	printf("%li\n", evenSum);
	return (0);
}
