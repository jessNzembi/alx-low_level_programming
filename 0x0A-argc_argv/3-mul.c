#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 (success)
 */

int main(int argc, char **argv)
{
	int i, num;
	int mul = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
		num = 0;
	}
	else
	{
		printf("Error\n");
		num = 1;
	}
	return (num);
}
