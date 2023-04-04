#include "lists.h"

/**
 *insert_nodeint_at_index - inserts a new node at a given position
 *@head: head of the list
 *@idx: new node index
 *@n: data to be added to the new node
 *Return: new node or NULL
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *temp;
unsigned int i;

new_node = (listint_t *)malloc(sizeof(listint_t));
if (new_node == NULL || head == NULL)
return (NULL);

new_node->n = n;

if (idx == 0) /* insert at the beginning */
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

temp = *head;
for (i = 0; i < idx - 1; i++)
{
if (temp == NULL)
{
free(new_node);
return (NULL);
}
temp = temp->next;
}

new_node->next = temp->next;
temp->next = new_node;

return (new_node);
}
