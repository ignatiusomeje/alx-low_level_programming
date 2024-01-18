#include "main.h"

/**
 * _strlen_recursion - print the length of a string;
 * @s: string to count it's length;
 * Return: a number;
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count++;
		count += _strlen_recursion(s + 1);
	}
	return (count);
}
