#include "monty.h"

/**
 * _pint - print the value at the top of the stack
 *
 * @stack: stack
 *
 * @line_number: line number of monty file
 *
 * Return: void
**/

void _pint(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	if (*stack == NULL)
	{
		_errorHandler(PINT_EMPTY_STACK);
	}

	printf("%d\n", (*stack)->n);
}
