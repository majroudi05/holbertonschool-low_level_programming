#include"lists.h"
/**
*
*
*
**/
list_t *add_node_end(list_t **head, const char *str)
{
list_t new = malloc(sizeof(list_t));
char duplicate = strdup(str);
list_t current = *head;
if(!new)
return (NULL);
new->str = duplicate;
new->len = strlen(duplicate);
new->next = NULL;
if (*head == NULL)
{
*haed = new;
return (new);
}
while (current->next)
current = current->next;
current->next = new;
return (new);
}