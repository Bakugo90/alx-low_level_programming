#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth node of a linked list
 * @head: head of the list
 * @index: which node to stop at
 * Return: pointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (i < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
