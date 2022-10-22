#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @num: the number
 *
 * Return: valure of last digit
 */

int print_last_digit(int num)
{
	int lastDigit = num % 10;

	if (num < 0)
	{
		lastDigit *= -1;
	}
	_putchar(lastDigit + '0');
	return (lastDigit);
}
