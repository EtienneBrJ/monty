#include "monty.h"

/**
 * _push - push an element to the stack
 *
 * @stack: stack
 *
 * @line_number: line number of monty file
 *
 * Return: void
**/

void _push(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *new;
	stack_t *tmp;

	new = NULL;
	tmp = *stack;

	if (_isNumber(appData->arguments[1]) == 0)
		_errorHandler(INVALID_ARGUMENT_FORMAT);

	new = _createStack(_atoi(appData->arguments[1]));

	if (new == NULL)
		return;

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
