#include "monty.h"

/**
 * _mul - adds the top two elem of the stack
 *
 * @stack: stack
 *
 * @line_number: line number of monty file
 *
 * Return: void
**/

void _mul(stack_t **stack, unsigned int line_number)
{
	stack_t *first = *stack, *next;
	int mul;

	if (*stack == NULL || (*stack)->next == NULL)
		_errorHandler(MUL_STACK_TOO_SHORT);

	next = first->next;
	mul = first->n * next->n;
	_pop(stack, line_number);
	next->n = mul;
}
