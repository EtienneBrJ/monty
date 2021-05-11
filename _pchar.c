#include "monty.h"
/**
 * _pchar - print the char at the top of the stack
 *
 * @stack: stack
 *
 * @line_number: line number of monty file
 *
 * Return: void
**/

void _pchar(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *tmp = *stack;

	if (*stack == NULL)
		_errorHandler(PCHAR_EMPTY_STACK);

	if (_stackLen(*stack) < 1)
		_errorHandler(PCHAR_STACK_TOO_SHORT);

	while (tmp->next)
		tmp = tmp->next;

	if (tmp->n < 0 && tmp->n > 127)
		_errorHandler(PCHAR_OUT_OF_RANGE);

	printf("%c\n", tmp->n);
}
