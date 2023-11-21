#include "sort.h"

void swap(int *first, int *sec);

/**
 * bubble_sort - bubble sort implementation
 * @array: the array to sort
 * @size: the size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size - i); j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
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
