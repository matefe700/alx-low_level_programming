#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` to print lowercase and then uppercase alphabet.
 * Return: 0
 */
int main(void)
{
	for (char c = 'a'; c <= 'z'; c++) 
		putchar(c);

	for (char c = 'A'; c <= 'Z'; c++)  
		putchar(c);
	
	putchar('\n');

	return (0);
}
