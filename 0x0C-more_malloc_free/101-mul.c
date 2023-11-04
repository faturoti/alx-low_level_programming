#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - Finds the length of a string
 * @str: The string to be measured
 *
 * Return: The length of the string
 */

bool check_string(char *str)
{
	int i;

	for(i = 0; str[i]; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (false);
	}

	return (true);
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
		if (!(check_string(argv[i]))
				printf("Error\n");
				return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	res = mul(a, b);
	printf("%d", res);

}
