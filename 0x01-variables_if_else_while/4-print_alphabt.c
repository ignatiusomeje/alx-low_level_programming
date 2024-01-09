#include <stdio.h>

/**
* main - prints all alphabet except q and e
*
* Description: using the main function, prints
* all alphabetic letters except q and e
* Return: 0
*
*/
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
			c++;
	}
	putchar('\n');
	return (0);
}
