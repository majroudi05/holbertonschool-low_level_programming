#include"lists.h"
/**
*get_dnodeint_at_index - Function that return the nth node
*@head: pointer to the head of linked list
*@index: the nth node requested
*Return: the node requested
**/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
int i = 0;
while (head != NULL)
if (i == index)
{
return (head);
}
else
{
i++;
head = head->next;
}
}
