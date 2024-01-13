#include "main.h"

/**
* _isupper - return whether an alphabet is capitalized or not;
* @c: the alphabet checked to know whether it's capital or not;
* Return: 0 || 1
*
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
