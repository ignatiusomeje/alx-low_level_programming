#include "main.h"

/**
* print_alphabet_x10 - print alphabet 10 times
*
* return" void
*
*/
void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	while (i <= 9)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		c = 'a';
		_putchar('\n');
		i++;
	}
}
