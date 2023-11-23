#include "lists.h"

/**
 * list_len - function  that returns the number of elements in a linked list.
 * @h: it's a pointer of type list_t.
 * Return: t returns the number of elements in a linked list.
 */

size_t list_len(const list_t *h)
{
size_t counter = 0;
while (h != NULL)
{
counter++;
h = h->next;
}
return (counter);
}
