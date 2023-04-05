#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head of the list
 * Return: void
 */
void free_list(list_t *head)
{
list_t *prev = NULL;
list_t *current = head;
if (!head)
return;

while (current)
{
prev = current;
current = current->next;
free(prev->str);
free(prev);
}
}
