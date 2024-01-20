#include "main.h"

/**
* main - using main to print the name of a program;
* @argc: the number of arguments;
* @argv: the array of arguments;
* Return: int;
*/

int main(int argc, char *argv[])
{
	int i = 0;

	while (i <= argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
