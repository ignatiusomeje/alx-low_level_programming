#include "main.h"

/**
* _isdigit - return whether a number was passed in;
* @c: the param checked to know whether it's a number or not;
* Return: 0 || 1
*
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
