#include <stdio.h>

/**
* main - use putchar to display numbers
*
* Description: using the main function to display
* numbers with putchar method.
* Return: 0
*
*/
int main(void)
{
	int i;

	for (i = 0; i<10; i++)
	{
		putchar(48 + i);	
	}
	putchar('\n');
	return (0);
}
