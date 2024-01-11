#include "main.h"

/**
* print_last_digit - returns the last digit of a num;
* @a: the number to fetch it's last digit;
* Return: the last digit
*/
int print_last_digit(int a)
{
	int lst = a % 10;

	if (lst < 0)
		lst *= -1;

	_putchar(lst + '0');
	return (lst);
}
