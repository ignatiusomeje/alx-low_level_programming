#include "main.h"

/**
* print_alphabet - using _putchar to print alphabet
*
* description - a function that prints list of alphabets
*
*
*/

void print_alphabet(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
	}
	_putchar('\n');
}
