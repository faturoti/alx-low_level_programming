#include "search_algos.h"

/**
 * jump_search - To use jump algorithms
 * @array: The array to search
 * @size: The size of the array to saerch
 * @value: The value to look for
 *
 * Return: the index og found value or -1
 */

int jump_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = (int)size - 1;
	int i = 0;
	int jump = (int)sqrt((double)size);

	if (array == NULL)
		return (-1);

	while (i < high)
	{
		if (array[i] == value)
		{
			high = i;
			low = low - jump;
			break;
		}
		
		if (array[i] < value)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			low = low + jump;
			i = low;
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			if ((i + 1) < (high))
			{
				high = i;
				low = low - jump;
			}
			else
			{
				printf("Good");
				high = i + jump;
				printf("Value checked array[%d] = [%d]\n", i, array[i]);
			}
		}
	}

	if (low == high)
	{
		printf("Value checked array[%d] = [%d]\n", high, array[high]);
		high = high + jump;
	}

	printf("Value found between indexes [%d] and [%d]\n", low, high);

	for (i = low; i <= high; i++)
	{
		if (i > (int)size - 1)
			return (-1);
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
