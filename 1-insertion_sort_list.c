#include "sort.h"

/**
 *insertion_sort_list - Sorting algoritm (insertion sort)
 *@list: List (Double pointer, which is a pointer to the address of the list)
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *prv = NULL;
	listint_t *current = NULL;
	listint_t *temp = NULL;
	listint_t *bigBoi = NULL;
	int j = 0;

	if (!list || !*list)
		return;

	temp = *list;
	while (temp)
	{
		if (temp->prev != NULL)
		{
			current = temp;
			j = 0;
			while (current && current->prev->n > current->n)
			{
				prv = current->prev;
				bigBoi = current->next;

				if (prv->prev)
					prv->prev->next = current;
				else
				{
					*list = current;
					j = 1;
				}
				if (bigBoi)
					bigBoi->prev = prv;

				current->prev = prv->prev;
				current->next = prv;
				prv->prev = current;
				prv->next = bigBoi;
				print_list(*list);
				if (j)
					break;
			}
		}
		temp = temp->next;
	}
}
