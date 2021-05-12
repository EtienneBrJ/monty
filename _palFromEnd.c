#include "monty.h"

/**
 * _palFromEnd - display linked list from end
 *
 * @stack: first node
 */
void _palFromEnd(stack_t **stack)
{
	stack_t *tmp = *stack, *prev;

	if (tmp == NULL)
		return;

	while (tmp != NULL)
	{
		prev = tmp;
		tmp = tmp->next;
	}

	if (prev != NULL)
	{
		while (prev != NULL)
		{
			printf("%d\n", prev->n);
			prev = prev->prev;
		}
	}
}
