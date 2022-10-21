#include "lists.h"
#include <stdio.h>

/**
* print_list - main function
* @h: pointer to head list
* Return: Returns number of node
* Description: singly linked list node structure
*/
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != 0)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			count++;
		}
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
			count++;

		}
		h = h->next;
	}
	return (count);

}
