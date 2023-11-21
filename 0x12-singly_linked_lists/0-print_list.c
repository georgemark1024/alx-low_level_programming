#include "lists.h"
#include<stdio.h>

/**
 * print_list - prints the contents of a singly linked lists
 * h: pointer to a list node of data struct
 * Return: number of nodes, type unsigned int
 */

size_t print_list(const list_t *h)
{
	list_t *next_ptr;
	size_t sum_node = 0;

	if (h->next == NULL)
	{
		printf("[%lu] (nil)", sum_node);
		return (sum_node);
	}
	printf("[%u] %s\n", h->len, h->str);
	next_ptr = h->next;
	sum_node++;
	while (next_ptr != NULL)
	{
		printf("[%u] %s\n", next_ptr->len, next_ptr->str);
		next_ptr = next_ptr->next;
		sum_node++;
	}
	return (sum_node);
}

