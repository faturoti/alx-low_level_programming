#include "main.h"
#include <stdio.h>
/**
 * print_array - to help print ha;lf
 * @a: Number of element of array
 * @n: to show the number of the string
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;

		printf(", ");

	}

	printf("\n");
}
