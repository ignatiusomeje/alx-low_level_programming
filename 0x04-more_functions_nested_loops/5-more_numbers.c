#include "main.h"

/**
* more_numbers - prints 10 times 0 -14;
* Return: void;
*/

void more_numbers(void)
{
	int i = 0;
	while (i <= 10)
	{
		int j = 0;
		while (j <= 14)
		{ 
			if (j >= 10)
				_putchar((j / 10) + '0');

			_putchar((j % 10) + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
