#include "lists.h"

/**
 * free_list - Frees a list
 * @head: A pointer to the list head
 */

void free_list(list_t *hea)
{
	list_t *tmp;

	while (hea)
	{
		tmp = hea->next;
		free(hea->str);
		free(hea);
		hea = tmp;
	}
}
