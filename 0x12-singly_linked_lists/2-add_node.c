#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 *  @head: @str: 
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
/* Variable declaration section: */
list_t *new_node = malloc(sizeof(list_t));
size_t a = 0;
/* Code section: */
new_node->str = strdup(str);
if (new_node == NULL)
return(NULL);
while (str[a])
{
a++;
new_node->str = strdup(str);
new_node->len = a;
new_node->next = *head;
*head = new_node;
}return (*head);
}
