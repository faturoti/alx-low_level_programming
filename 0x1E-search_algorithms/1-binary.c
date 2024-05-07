#include "search_algos.h"

/**
 * binary_search - to use binary search algorithm for search
 *
 * @array: input array to find value
 * @size: size of the array to search
 * @value: value to search for
 *
 * Return: return the value index or -1.
 */

int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = 0;
	int i = 0;

	for (low = 0, high = (int)size - 1; high >= low;)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);

		i = low + (high - low) / 2;
		if (value == array[i])
			return (i);
		if (array[i] > value)
			high = i - 1;
		else
			low = i + 1;
	}

	return (-1);
}
