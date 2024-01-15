#include "main.h"

/**
* _puts - prints a string to the stdout
* @str: string to print out
* Description: prints a string
* Return: void
*/

void _puts(char *str)
{
	int inc = 0;

	while (*(str + inc) != '\0')
	{
		putchar(*(str + inc));
		inc++;
	}
	putchar(10);
}
