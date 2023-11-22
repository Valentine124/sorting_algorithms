#include "sort.h"

/**
 * insertion_sort_list - insertion sort implementation on a list
 * @list: the list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *current;

	if (list == NULL || *list == NULL)
		return;
	if ((*list)->next == NULL)
		return;

	temp = (*list)->next;

	while (temp)
	{
		current = temp;

		while (current != NULL && current->n < (current->prev)->n)
		{
			swap_list(current, current->prev);
			print_list(*list);
			current = current->prev;

			if (!current->prev)
				break;
		}

		temp = temp->next;
	}
}

/**
 * swap_list - swaps two items in a list
 * @item1: the first item
 * @item2: the second item
 */
void swap_list(listint_t *item1, listint_t *item2)
{
	int temp;

	temp = item1->n;
	item1->n = item2->n;
	item2->n = temp;
}
