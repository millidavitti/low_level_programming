#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_len - returns the length of a string
 * @str: string arg
 * Return: length
 */

int str_len(const char *str)
{
int len = 0;
while (*str++ != '\0')
len++;
return (len);
}

/**
 * add_node - adds a new node at the beginning of a list
 * @head: head of the list
 * @str: data
 * Return: new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}

new_node->len = str_len(str);
new_node->next = *head;
*head = new_node;
return (new_node);
}
