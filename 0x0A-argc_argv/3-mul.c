#include "main.h"

/**
* main - using main to print the name of a program;
* @argc: the number of arguments;
* @argv: the array of arguments;
* Return: int;
*/

int main(int argc, char *argv[])
{
	int i = 1;
	int mul = 1;

	if (argc > 1 && argc <= 3)
	{
		while (i < argc)
		{
			mul *= atoi(argv[i]);
			i++;
		}
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
