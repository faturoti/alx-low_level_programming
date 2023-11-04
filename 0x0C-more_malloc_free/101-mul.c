#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * check_string - Finds the length of a string
 * @str: The string to be measured
 *
 * Return: The length of the string
 */

int check_string(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (1);
	}

	return (2);
}

/**
 * main - multiples two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	unsigned long int a, b, res;
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	for (i = 1; i < argc; i++)
	{
		if (check_string(argv[i]) == 1)
		{
			printf("Error\n");
			return (98);
		}
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	res = a * b;
	printf("%ld", res);
	printf("\n");

	return (0);
}
