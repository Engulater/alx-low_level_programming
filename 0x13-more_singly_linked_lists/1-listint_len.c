#include "lists.h"

/**
 * listint_len - num of elements in a linked lists to be returned
 * @h: linked list of type listint_t to cross
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}

