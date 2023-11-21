#include "sort.h"

/**
 * bubble_sort - bubble sort implementation
 * @array: the array to sort
 * @size: the size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (array == NULL)
		return;
	if (size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		int swaped = 0;

		for (j = 0; j < (size - i); j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
				swaped = 1;
			}
		}

		if (!swaped)
			break;
	}
}

/**
 * swap - swaps two element in an array
 * @first: the first element
 * @sec: the second element
 */
void swap(int *first, int *sec)
{
	int temp = *first;

	*first = *sec;
	*sec = temp;
}
