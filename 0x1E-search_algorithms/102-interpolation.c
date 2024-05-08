#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of
 *
 * @array: array to search in
 * @size: the size of the array
 * @value: value to search for in array
 *
 * Return: index of value found or -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos;
	size_t low = 0;
	size_t high = size - 1;
	double f;

	if (array == NULL)
		return (-1);

	while (size)
	{
		f = (double)(high - low) * (value - array[low]) / (array[high] - array[low]);
		pos = (size_t)(f + low);
		printf("Value checked array[%d]", (int)pos);

		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[pos]);
		}

		if (array[pos] == value)
			return ((int)pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;

		if (low == high)
			break;
	}

	return (-1);
}
