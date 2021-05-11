#include "monty.h"

void _swap(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *tmp = *stack, *last = NULL;

	if (_stackLen(*stack) <= 1)
		_errorHandler(STACK_TOO_SHORT);

	if (*stack == NULL)
		_errorHandler(EMPTY_STACK);

	while(tmp != NULL)
	{
		last = tmp;
		tmp = tmp->next;
	}

	if (last == NULL)
		return;

	tmp = last->prev;
	last->next = tmp;
	last->prev = tmp->prev;
	tmp->prev->next = last;
	last->next = tmp;
	tmp->prev = last;
	tmp->next = NULL;
}
