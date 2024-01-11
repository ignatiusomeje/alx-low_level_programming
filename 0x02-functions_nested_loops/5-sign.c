#include "main.h"

/**
* print_sign - print signs of a number;
* @n: the parameter that it's sign is checked;
* Return: 1 || 0 || -1;
*/
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
