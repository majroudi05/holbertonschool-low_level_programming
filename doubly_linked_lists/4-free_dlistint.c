#include"lists.h"
/**
*free_dlistint - Function that free the linked list
*@head: pointer to the head of the list
*Return: nothing
*
**/
void free_dlistint(dlistint_t *head)
{
dlistint_t *current;
while (head != NULL)
{
free(head->prev);
free(head);
head = current;
}
}
