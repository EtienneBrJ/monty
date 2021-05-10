#include "monty.h"

void _pint(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *tmp = *stack, *prev;

	if (*stack == NULL)
	{
		_errorHandler(EMPTY_STACK);
	}

	while(tmp != NULL)
	{
		prev = tmp;
		tmp = tmp->next;
	}

	printf("%d\n", prev->n);
}
