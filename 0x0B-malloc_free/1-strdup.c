#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *ar;
	int i, r = 0;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	ar = malloc(sizeof(char) * (i + 1));

	if (ar == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		ar[r] = str[r];

	return (ar);
}
