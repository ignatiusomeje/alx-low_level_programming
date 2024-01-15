#include "main.h"

/**
 * string_toupper - turn lower case to upper
 * @str: string to be changed
 *
 * Return: pointer
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
