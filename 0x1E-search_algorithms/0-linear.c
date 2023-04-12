#include "search_algos.h"

/**
 * linear_search - searches for a value using Linear searche algorithm
 * @array: pointer to the first element in the arry to be searched
 * @size: size of the array
 * @value: value to be searched for
 *
 * Return: first index of value if found, else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t j;

	if (array == NULL)
		return (-1);
	for (j = 0; j < size; j++)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
