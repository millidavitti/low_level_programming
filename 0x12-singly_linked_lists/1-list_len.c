#include "lists.h"

/**
* list_len - returns the number of nodes in a linked list
* @head: the head of the list
* Return: list len
*/
size_t list_len(const list_t *head)
{
size_t length = 0;
const list_t *current = head;

while (current != NULL)
{
length++;
current = current->next;
}

return (length);
}
