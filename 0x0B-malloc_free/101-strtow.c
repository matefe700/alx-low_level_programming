#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow - splits a string into words.
 * @str: string to split
 * Return: Null if fail, else return a pointer to an array of strings (words)
 */

void print_tab(char **tab)
{
    int i;

    for (i = 0; tab[i] != NULL; ++i)
    {
        printf("%s\n", tab[i]);
    }
}

char **strtow(char *str)
{
	char **array = malloc(sizeof(char *));
	char *sep = " ";

	if (array)
	{
		size_t n = 1;

		char *token = strtok(str, sep);

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

			token = strtok(NULL, sep);
		}

		array[n - 1] = NULL;
	}

	return (array);
}

int main(void)
{
    char **tab;

    tab = strtow("      ALX School         #cisfun      ");
    if (tab == NULL)
    {
        printf("Failed\n");
        return (1);
    }
    print_tab(tab);
    return (0);
}
