#include "monty.h"

/**
 * _palFromStart - display linked list from start
 *
 * @stack: first node
 */
void _palFromStart(stack_t **stack)
{
	stack_t *tmp = *stack;

	if (tmp == NULL)
		return;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
