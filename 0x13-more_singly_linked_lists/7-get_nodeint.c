#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head of the list
 * @index: node index, starting at 0
 * Return: nth node of a listint_t or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;

for (i = 0; i < index && head; i++)
head = head->next;

return (head);
}
