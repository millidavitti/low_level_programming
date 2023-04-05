#include "lists.h"
#include <stdio.h>

/**
 *print_list - prints all the elements of a list_t list
 *@head: the head of the list
 *Return: list len
 */
size_t print_list(const list_t *head)
{
size_t count = 0;
while (head != NULL)
{
printf("[%u] ", head->len);
if (head->str == NULL)
printf("(nil)\n");
else
printf("%s\n", head->str);

head = head->next;
count++;
}
return (count);
}
