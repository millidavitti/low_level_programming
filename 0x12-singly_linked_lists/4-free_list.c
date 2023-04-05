#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
if (!head)
return;

list_t *prev = NULL;
list_t *current = head;

while (current)
{
prev = current;
current = current->next;
free(prev->str);
free(prev);
}
}
