#include "lists.h"

/**
* get_list_length - returns the number of nodes in a linked list
* @head: the head of the list
* Return: the number of nodes in the list
*/
size_t get_list_length(const list_t *head)
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
