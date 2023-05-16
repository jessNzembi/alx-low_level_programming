#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 (success)
 */

int main(int argc, char **argv)
{
	int sum = 0;
	int i, ret;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] >= 48 && *argv[i] <= 57)
			{
				sum += atoi(argv[i]);
				ret = 0;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
		ret = 0;
	}
	return (ret);
}
