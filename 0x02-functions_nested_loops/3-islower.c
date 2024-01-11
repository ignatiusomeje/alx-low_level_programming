#include "main.h"

/**
* _islower - checks for lowercase characters;
* @c: is the parameter that we check for lowercase;
* Return: 0 || 1;
*
*/
int _islower(int c)
{
	char innerc = 'a';
	char z = 'z';

	if (c >= innerc && c <= z)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
