#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: the head of the list
 * @n: integer to add to the new node
 * Return: new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;

/*Allocate memory for new node*/
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = *head;

/*Update head pointer to point to the new node*/
*head = new_node;

/* Return the address of the new element*/
return (new_node);
}
