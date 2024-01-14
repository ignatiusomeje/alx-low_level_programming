#include "main.h"
/**
* print_number - Prints a number to the terminal
* @n: The number to print out
*
*/
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -i;
	}
	if (i > 9)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
