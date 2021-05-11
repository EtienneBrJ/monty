#include "monty.h"

/**
 * _add - adds the top two elem of the stack
 *
 * @stack: stack
 *
 * @line_number: line number of monty file
 *
 * Return: void
**/

void _add(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *before = *stack, *last = NULL, *new;
	int sum;
	(void) new;

	if (*stack == NULL)
		_errorHandler(ADD_EMPTY_STACK);

	if (_stackLen(*stack) <= 1)
		_errorHandler(ADD_STACK_TOO_SHORT);

	while (before != NULL)
	{
		last = before;
		before = before->next;
	}

	if (last == NULL)
		return;
	before = last->prev;
	sum = last->n + before->n;
	_pop(stack, line_number);
	before->n = sum;
}
