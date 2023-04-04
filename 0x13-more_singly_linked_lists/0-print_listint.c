#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @head: pointer to the head of the list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *head)
{
size_t node_count = 0;

while (head)
{
printf("%d\n", head->n);
head = head->next;
node_count++;
}
return (node_count);
}
