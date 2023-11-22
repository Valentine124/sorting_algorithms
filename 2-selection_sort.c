#include "sort.h"

/**
 * selection_sort - selection sort implementation
 * @array: the array to sort
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int *smallest, sw;

	if (array == NULL)
		return;
	if (size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		smallest = &array[i];
		sw = 0;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < *smallest)
			{
				smallest = &array[j];
				sw = 1;
			}
		}

		swap(&array[i], smallest);
		if (sw)
			print_array(array, size);
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
