#include "monty.h"

/**
 * _pstr - print a string starting at the top of the stack,
 * followed by a new line
 *
 * @stack: stack
 * @line_number: line number in monty file
 *
 * Return: void
 */

void _pstr(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *tmp = *stack;

	if (!tmp)
	{
		printf("\n");
		return;
	}

	while (tmp)
	{
		if ((tmp->n < 0 || tmp->n > 127) || tmp->n == 0)
			break;

		printf("%c", tmp->n);
		tmp = tmp->next;
	}
	printf("\n");
}
