#include "monty.h"

/**
 * _mod - modulo the top two elem of the stack
 *
 * @stack: stack
 *
 * @line_number: line number of monty file
 *
 * Return: void
**/

void _mod(stack_t **stack, unsigned int line_number)
{
	stack_t *first = *stack, *next;
	int mod;

	if (*stack == NULL || _stackLen(*stack) <= 1)
		_errorHandler(MOD_STACK_TOO_SHORT);

	if (first->n == 0)
		_errorHandler(NULLABLE_NUMBER);

	next = first->next;
	mod = next->n % first->n;
	_pop(stack, line_number);
	next->n = mod;
}
