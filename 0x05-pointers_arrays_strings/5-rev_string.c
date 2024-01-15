#include "main.h"

/**
* rev_string - Reverses a string
* @s: string to be reversed
*
* Return: nothing
*/

void rev_string(char *s)
{
	int i, tmp, len = _strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		tmp = *(s + i);
		*(s + i) = *(s + len - i - 1);
		*(s + len - i - 1) = tmp;
	}
}

/**
* _strlen - give the length of a string;
* @s: the string to give it length;
* Return: int;
*/

int _strlen(char *s)
{
	int strnum = 0;

	while (*(s + strnum) != '\0')
		strnum++;

	return (strnum);
}
