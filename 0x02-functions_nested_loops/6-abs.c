#include "main.h"
/**
 * _abs - computes absolute value of an int
 * @num: integer to be checked
 *
 * Return: 0
 */

int _abs(int num)
{
	if (num < 0)
	{
		num = -num;
	}
	return (num);
}
