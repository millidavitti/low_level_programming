#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @list_head: the head of the list
 * Return: void
 */
void free_listint(listint_t *list_head)
{
listint_t *temp_node;

while (list_head)
{
temp_node = list_head;
list_head = list_head->next;
free(temp_node);
}
}
