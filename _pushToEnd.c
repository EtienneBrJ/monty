#include "monty.h"

/**
 * _pushToEnd - push new stack at end of the stack
 *
 * @stack: head of the stack
 */
void _pushToEnd(stack_t **stack)
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
		new->prev = NULL;
		*stack = new;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		new->prev = tmp;
		tmp->next = new;
	}
}
