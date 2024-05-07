#include "search_algos.h"
/**
 * linear_search - To search for a value in an area
 *
 * @array - Pointer to area
 * @size - size of array
 * @value - value to search for
 *
 * Return: -1 for not value and number found
 */

int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
