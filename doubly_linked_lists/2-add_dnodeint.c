#include"lists.h"
/**
*add_dnodeint - Funetion that add new node at the head
*@head: the linked list
*@n: the data to add
*Return: the linked list
**/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new = malloc(sizeof(dlistint_t));
dlistint_t *current = *head;
if (new == NULL)
return (NULL);
new->n = n;
new->prev = NULL;
new->next = *head;
if (*head != NULL)
{
(*head)->perv = new;
}
*head = new;
return (new);
}
