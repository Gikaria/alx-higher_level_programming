#include "lists.h"

/**
 * check_cycle - the function checks for loop inside the linked list
 * @list: The singly linked list
 * Return: 0 if there is no cycle, 1 if there is cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *slow_ptr, *fast_ptr;

	if (!list)
		return (0);

	slow_ptr = list;
	fast_ptr = list;
	while (fast_ptr != NULL && fast_ptr->next != NULL)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;
		if (slow_ptr == fast_ptr)
			return (1);
	}
	return (0);
}
