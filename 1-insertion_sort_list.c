#include "sort.h"
/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 *                        using the Insertion sort algorithm.
 *
 * @list: Double pointer to the head of the doubly linked list.
 */
void insertion_sort_list(listint_t **list)
{
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	listint_t *current, *prev, *temp;

	current = (*list)->next;
	while (current)
	{
		prev = current->prev;
		temp = current;
		while (prev && prev->n > current->n)
		{
			if (prev->prev)
				prev->prev->next = current;
			else
				*list = current;

			if (current->next)
				current->next->prev = prev;

			current->prev = prev->prev;
			prev->next = current->next;
			current->next = prev;
			prev->prev = current;

			prev = current->prev;

			/* Print the list after each swap */
			print_list(*list);
		}
		current = temp->next;
	}
}

