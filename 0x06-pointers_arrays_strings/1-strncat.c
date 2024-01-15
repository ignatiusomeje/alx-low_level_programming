#include "main.h"
/**
* _strncat - concatenate two strings by adding number of bytes passed;
* @dest: string to be attached with another;
* @src: string to attach;
* @n: integer parameter to compare index to
* Return: returns new concatenated string
*/

char *_strncat(char *dest, char *src, int n)
{

	int i = 0, destlen = 0;

	while (dest[i++])
		destlen++;

	for (i = 0; src[i] && i < n; i++)
		dest[destlen++] = src[i];

	return (dest);

}
