#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow - splits a string into words.
 * @str: string to split
 * Return: Null if fail, else return a pointer to an array of strings (words)
 */

char **strtow(char *str)
{
	char **array = malloc(sizeof(char *));

	if (array)
	{
		size_t n = 1;

		char *token = strtok(line, ' ');

		while (token)
		{
			char **tmp = realloc(array, (n + 1) * sizeof(char *));

			if (tmp == NULL)
				break;

			array = tmp;
			++n;

			array[n - 2] = malloc(strlen(token) + 1);
			if (array[n - 2] != NULL)
				strcpy(array[n - 2], token);

			token = strtok(NULL, ' ');
		}

		array[n - 1] = NULL;
	}

	return (array);
}

int main(void)
{
	char s[] = "          Hello             World        ";
	char **array = chunkify(s, " ");

	if (array != NULL)
	{
		for (char **p = array; *p; ++p)
			puts(*p);

		for (char **p = array; *p; ++p)
			free(*p);
		free(array);
	}

	return (0);
}
