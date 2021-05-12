#include "monty.h"

/**
 * _pushToStart - push new stack at start of the stack
 *
 * @stack: head of the stack
 */
void _pushToStart(stack_t **stack)
{
	stack_t *new;
	stack_t *tmp;

	new = NULL;
	tmp = *stack;

	_checkArguments();

	new = _createStack(_atoi(appData->arguments[1]));

	if (new == NULL)
		_errorHandler(MALLOC_FAILED);

	if (*stack == NULL)
	{
		*stack = new;
	}
	else
	{
		new->next = tmp;
		tmp->prev = new;
		*stack = new;
	}
}
