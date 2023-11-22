#include "lists.h"

/**
 * print_list - function that print t prints all the elements of a list_t list.
 * @h: it's a pointer of type list_t.
 * Return: the number of nodes in success.
 */

size_t print_list(const list_t *h)
{
/* Variable declaration section: */
size_t count = 0;

/* Code section: */
while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
printf("[%d] %s \n", h->len, h->str);
h = h->next;
count++;
}
return (count);
}
