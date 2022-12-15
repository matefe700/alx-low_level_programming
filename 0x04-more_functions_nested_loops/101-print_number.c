#include "main.h"

/**
 * print_number - Function that prints an integer.
 * @n: int type number
 * Description: Can only use _putchar to print.
 */

void print_number(int n)
{
	int m, num, t;

	if (n < 0)
		_putchar('-');

	num = (n < 0 ? -1 : 1) * n;

	for (t = num, m = 1; t > 0; t /= 10,  m *= 10)
		;

	m /= 10;

	for (; m > 0; m /= 10)
		_putchar ('0' + (num / m) % 10);

}
