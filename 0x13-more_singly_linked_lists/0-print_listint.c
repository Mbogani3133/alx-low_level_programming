#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: The head of the listint_t list.
 *
 * Return: The number of nodes in the listint_t list.
 */
size_t print_listint(const listint_t *h)
{
size_t count = 1;

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

printf("%d\n", h->n);
return (count);

}
