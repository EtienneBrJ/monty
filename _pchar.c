#include "monty.h"

void _pchar(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *before = *stack, *last = NULL, *new;
	(void) new;

	if (*stack == NULL)
		_errorHandler(PCHAR_EMPTY_STACK);

	if (_stackLen(*stack) < 1)
		_errorHandler(PCHAR_STACK_TOO_SHORT);

	while(before != NULL)
	{
		last = before;
		before = before->next;
	}

	if (last->n <= 'A' && last->n >= 'Z')
		_errorHandler(PCHAR_OUT_OF_RANGE);

	printf("%c\n", last->n);
}
