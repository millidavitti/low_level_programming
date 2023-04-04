#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list, \
and returns the head node's data (n)
 * @head: pointer to the head of the list
 * Return: node's data or 0
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int data;
if (*head == NULL)
return (0);
temp = *head;
data = temp->n;
*head = (*head)->next;
free(temp);

return (data);
}
