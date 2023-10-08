#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This is the main method
 * @n: The number to be checked
 *
 * Description: This helps to generate a random number
 *
 * Return: returns 0 to end main method
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
		printf("%d is negative\n",n);
	return (0);
}
