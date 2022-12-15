#include "main.h"

/**
 * print_number - Function that prints an integer.
 * @n: int type number
 * Description: Can only use _putchar to print.
 */

void print_number(n)
{
	int m = 1;
	int num = n;

	if (num < 0)
	{
		num *= -1;
		_putchar('-');
	}

	int t = num;

	for (; t > 0; t /= 10,  m *= 10)
		;

	m /= 10;

	for (; m > 0; m /= 10)
		_putchar ('0' + (num / m) % 10);

}
