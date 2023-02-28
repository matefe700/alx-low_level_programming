#include "main.h"

/**
 * string_nconcat - concatenate 2 strings, only n bytes of s2
 * @s1: string 1
 * @s2: string 2
 * @n: bytes to include of s2
 * Return: NULL if fail, else pointer to malloc memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int strlen1, i, c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (strlen1 = 0; s1[strlen1] != '\0'; strlen1++)
		;

	p = malloc((strlen1 + n + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0, c = 0; i < (strlen1 + (int) n); i++)
	{
		if (i < strlen1)
			p[i] = s1[i];
		else
			p[i] = s2[c++];
	}
	p[i] = '\0';

	return (p);
}


