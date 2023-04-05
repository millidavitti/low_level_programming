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
 * add_list_node - adds a new node at the beginning of a list
 * @list: head of the list
 * @data: data
 * Return: new element or NULL
 */
list_t *add_list_node(list_t **list, const char *data)
{
list_t *new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

new_node->data = strdup(data);
if (new_node->data == NULL)
{
free(new_node);
return (NULL);
}

new_node->len = str_len(data);
new_node->next = *list;
*list = new_node;
return (new_node);
}
