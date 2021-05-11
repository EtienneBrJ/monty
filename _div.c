#include "monty.h"

void _div(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *before = *stack, *last = NULL, *new;
	int sum;
	(void) new;

	if (*stack == NULL)
		_errorHandler(DIV_EMPTY_STACK);

	if (_stackLen(*stack) <= 1)
		_errorHandler(DIV_STACK_TOO_SHORT);

	while(before != NULL)
	{
		last = before;
		before = before->next;
	}

	if (last == NULL)
		return;
	before = last->prev;

	if (before->n == 0)
		_errorHandler(NULLABLE_NUMBER);

	sum = last->n / before->n;
	_pop(stack, line_number);
	before->n = sum;
}
