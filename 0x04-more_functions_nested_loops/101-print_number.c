#include "main.h"
#include <stdio.h>
/**
 * print_number - Function that prints an integer.
 * @n: int type number
 * Description: Can only use _putchar to print.
 */

void print_number(int n)
{
	int m, num, t, v;

	if (n < 0)
		_putchar('-');
	num = n < 0 ? -n : n;

	for (t = num, m = 0; t > 0; t /= 10,  m++)
		;

	for (; m; m--)
	{
		v = num;
		for (t = m; t > 1; t--)
			v /= 10;
			_putchar ('0' + v % 10);
	}

}
