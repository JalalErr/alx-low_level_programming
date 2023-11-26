#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: the head of linked list.
 * @str: variable string that stored in the list.
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
/* Variable declaration section: */
list_t *new_node = malloc(sizeof(list_t));
size_t count = 0;

/* Code section: */

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
	return (NULL);
else
	while (str[count])
		count++;

new_node->str = strdup(str);
new_node->len = count;
new_node->next = *head;
*head = new_node;
return (*head);
}
