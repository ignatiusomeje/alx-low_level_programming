#include <stdio.h>

/**
* main - a program that prints _putchar
*
* Description: using the main function, the program
* will print _putchar to the console.
* Return: 0
*
*/
int main(void)
{
	char string[] = "_putchar";
	char *ptr = string;

	while (*ptr != '\0')
	{
		printf("%c", *ptr);
		ptr++;
	}
	printf("\n");
	return (0);
}
