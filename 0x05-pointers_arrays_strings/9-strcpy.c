#include "main.h"

/**
* _strcpy - Copy string frm source, paste in dest
* @dest: destination to past the string;
* @src: source to copy the string from
*
* Return: destination
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';

	return (dest);
}
