#include "main.h"

/**
* _isalpha - checks for alphabetic character;
* @c: the parameter that we check for upper
* and lower case.
* Return: 0 || 1;
*
*/
int _isalpha(int c)
{
	char capa = 'A';
	char capz = 'Z';
	char sma = 'a';
	char smz = 'z';

	if ((c >= sma && c <= smz) || (c >= capa && c <= capz))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
