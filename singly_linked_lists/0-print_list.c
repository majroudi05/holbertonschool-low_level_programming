#include"lists.h"
/**
*prin_list - Function that print all the elements in linked list
*@h: liked list
*Return: the number of node of the linked list
*
**/
size_t print_list(const list_t *h)
{
   size_t size = 0;
   while (h != NULL)
   {
    if(h->str == NULL)
    {
        printf("[0] (nil)\n");
    }
    else
    {
    printf("[%u] %s\n", h->len, h->str);
    }
    size ++;
    h = h->next;
   }
   return (size);
}