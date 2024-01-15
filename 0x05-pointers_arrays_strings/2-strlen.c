#include "main.h"

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
