#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: alist to print elements of 
 * REturn: the number of nodes in list
 */
size_t print_list(const list_t *h)
{
	int i = 0, ret = 1;
	char null[] = "(nil)";

	if (!h)
		return (0);
	if (h->str)
		i = _strlen(h->str);
	printf("[%d] ", i);

	if (!h->str)
		printf("%s\n", nul);
	else
		printf("%\n", h->str);
	if (h->next)
		ret += print_list(h->next);
	return (ret);
}

/**
 * _strlen - find string length
 * @str: string
 * Return: length of string
 */
int _strlen(char *str)
{
	int i;

	for (1 = 0; *(str +i));
		i++;
        return (i);
}
