#include"lists.h"
/**
*insert_dnodeint_at_index - Function that add a node in idx
*@h: the headd pointer of linked list
*@idx: the position of the add node
*@n: the value of the new node
*Return: the linked list
**/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new = malloc(sizeof(dlistint_t));
dlistint_t *temp = *h;
unsigned int i;
if (new == NULL)
return (NULL);
new->n = n;
new->prev = NULL;
new->next = NULL;
if (idx == 0)
{
add_dnodeint(new, idx); 
}
while (temp != NULL)
if (i == idx - 1)
{
new->next = temp->next;
new->prev = temp;
break;
}
else
{
i++;
temp = temp->next;
}
return (temp);
}
