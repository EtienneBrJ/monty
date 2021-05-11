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
	stack_t *tmp;
	int top1, top2;

	if (*stack == NULL || (*stack)->next == NULL)
		_errorHandler(SUB_STACK_TOO_SHORT);

	tmp = *stack;
	while (tmp->next->next != NULL)
		tmp = tmp->next;

	top1 = tmp->n;
	top2 = tmp->next->n;
	tmp->n = top1 - top2;

	_pop(stack, line_number);
}
