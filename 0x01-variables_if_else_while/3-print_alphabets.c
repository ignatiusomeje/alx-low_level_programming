#include <stdio.h>
/**
* main - prints alphabetic letters
*
* Descriptions: using the main function, this program will display
* list of alphabetic letters.
* Return: 0
*
*/
int main(void)
{
	char c = 'a';
	char C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}
