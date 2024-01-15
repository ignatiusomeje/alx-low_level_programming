#include "main.h"

/**
* print_rev - Prints a given string in reverse order
* @s: String to reverse
* Return: void
*/

void print_rev(char *s)
{
	int stringnum = strlen(s);

	while (stringnum--)
		putchar(*(s + stringnum));
	putchar(10);
}
