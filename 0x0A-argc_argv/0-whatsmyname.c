#include "main.h"

/**
 * main - print the name of the file followed by a new line
 * @argc: argument count
 * @argv: arguments passed to main as an array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argc;
	char * p = argv[0];

	while (*p)
	{
		_putchar(*p);
		p++;
	}
	return (0);
}
