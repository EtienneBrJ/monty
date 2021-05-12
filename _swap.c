#include "monty.h"

/**
 * _swap - swap the top two elem of the stack
 *
 * @stack: stack
 *
 * @line_number: line number of monty file
 *
 * Return: void
**/

void _swap(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *first = *stack, *next = NULL;

	if (_stackLen(*stack) <= 1)
		_errorHandler(SWAP_STACK_TOO_SHORT);

	if (*stack == NULL)
		_errorHandler(SWAP_EMPTY_STACK);

	next = first->next;
	first->next = next->next;
	next->prev = NULL;
	next->next = first;
	*stack = next;
}
