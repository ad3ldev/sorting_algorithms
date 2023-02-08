#include "sort.h"

/**
 * insertion_sort_list - sort double linked list with insertion algorithm
 * @list: pointer to the head of the list
 *
 * Return: Always void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *iter, *insert, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (iter = (*list)->next; iter != NULL; iter = temp)
	{
		temp = iter->next;
		insert = iter->prev;
		while (insert != NULL && iter->n < insert->n)
		{
			insert->next = iter->next;
			if (iter->next != NULL)
				iter->next->prev = insert;
			iter->prev = insert->prev;
			iter->next = insert;
			if (insert->prev != NULL)
				insert->prev->next = iter;
			else
				*list = iter;
			insert->prev = iter;
			insert = iter->prev;
			print_list((const listint_t *)*list);
		}
	}
}
