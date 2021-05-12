#include "monty.h"

/**
 * _sub - sub the top two elem of the stack
 *
 * @stack: stack
 *
 * @line_number: line number of monty file
 *
 * Return: void
**/

void _sub(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *first = *stack, *next;
	int sub;

	if (first == NULL || first->next == NULL)
		_errorHandler(SUB_STACK_TOO_SHORT);

	next = first->next;
	sub = next->n - first->n;
	next->n = sub;
	_pop(stack, line_number);
}
