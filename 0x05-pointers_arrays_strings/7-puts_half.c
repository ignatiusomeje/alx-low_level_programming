#include "main.h"

/**
 * puts_half - prints a string
 * @str: string to print
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, len = _strlen(str);

	for (i = ((len - 1) / 2) + 1; i < len; i++)
		putchar(*(str + i));
	putchar(10);
}

/**
* _strlen - give the length of a string;
* @s: the string to give it length;
* Return: int;
*/

int _strlen(char *s)
{
	int strnum = 0;

	while (*(s + strnum) != '\0')
		strnum++;

	return (strnum);
}
