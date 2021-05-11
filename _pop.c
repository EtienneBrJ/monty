#include "monty.h"
/**
 * _pop - remove the top elem of the stack
 *
 * @stack: stack
 *
 * @line_number: line number of monty file
 *
 * Return: void
**/

void _pop(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *tmp = *stack, *last = NULL;
	int eraseHead = 0;

	if (*stack == NULL)
		_errorHandler(POP_EMPTY_STACK);

	while (tmp != NULL)
	{
		last = tmp;
		tmp = tmp->next;
	}

	if (last == NULL)
		return;

	if (last->prev != NULL)
		last->prev->next = NULL;
	if (last->prev == NULL)
		eraseHead = 1;
	free(last);
	last = NULL;
	if (eraseHead == 1)
		*stack = NULL;
}
