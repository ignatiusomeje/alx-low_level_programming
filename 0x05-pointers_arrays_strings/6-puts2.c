#include "main.h"

/**
 * puts2 - prints every other character that is even;
 * @str: string to filter out the even numbers from;
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			putchar(*(str + i));
		i++;
	}
	putchar(10);
}
