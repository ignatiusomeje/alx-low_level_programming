#include "main.h"

/**
* _strcat - concats two strings together
* @dest: base string accepting concat
* @src: incoming strings to concat
*
* Return: pointer
*/

char *_strcat(char *dest, char *src)
{

	int i = 0, destlen = 0;

	while (dest[i++])
		destlen++;

	for (i = 0; src[i]; i++)
		dest[destlen++] = src[i];

	return (dest);
}
