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
	stack_t *first = *stack, *next = NULL;
	int sum;

	if (*stack == NULL || _stackLen(*stack) <= 1)
		_errorHandler(ADD_STACK_TOO_SHORT);

	next = first->next;
	sum = first->n + next->n;
	_pop(stack, line_number);
	next->n = sum;
}
