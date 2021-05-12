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
	stack_t *next;

	if (*stack == NULL)
		_errorHandler(POP_EMPTY_STACK);

	next = (*stack)->next;
	free(*stack);
	*stack = next;
}
