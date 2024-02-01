#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list of integers.
 * @list: is a pointer to a pointer that points to a doubly linked list.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *nodoCurrent;
	listint_t *next;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		return;
	}
	nodoCurrent = (*list)->next;
	while (nodoCurrent != NULL)
	{
		next = nodoCurrent->next;
		while (nodoCurrent->prev != NULL && nodoCurrent->n < nodoCurrent->prev->n)
		{
			nodoCurrent->prev->next = nodoCurrent->next;
			if (nodoCurrent->next != NULL)
			{
				nodoCurrent->next->prev = nodoCurrent->prev;
			}
			nodoCurrent->next = nodoCurrent->prev;
			nodoCurrent->prev = nodoCurrent->prev->prev;
			nodoCurrent->next->prev = nodoCurrent;
			if (nodoCurrent->prev != NULL)
			{
				nodoCurrent->prev->next = nodoCurrent;
			}
			else
			{
				*list = nodoCurrent;
			}
			print_list(*list);
		}
		nodoCurrent = next;
	}
}
