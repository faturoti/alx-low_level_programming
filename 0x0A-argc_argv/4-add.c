#include <stdio.h>
#include <stlib.h>

/**
 * main - prints the addition of positive numbers,
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments.
 *
 * Return: if one of the numbers contains symbols that are non-digits - 1
 */
int main(int argc, char *argv[])
{
	int num, digit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (0);
			}
		}
		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}
