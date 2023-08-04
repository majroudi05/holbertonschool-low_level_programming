#include"main.h"
/**
*sum_dlistint - Function that return teh sum of all data
*@head: the head pointer on the linked list
*Return: the sum of all data in the LS
*
**/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
while (head != NULL)
{
sum += head->n
head = head->next
}
return (sum);
}
