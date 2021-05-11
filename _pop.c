#include "monty.h"

void _pop(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	printf("Pop function\n");
	stack_t *tmp = *stack, *last = NULL;
	int eraseHead = 0;

	if (*stack == NULL)
		_errorHandler(EMPTY_STACK);

	while(tmp != NULL)
	{
		last = tmp;
		tmp = tmp->next;
	}

	if (last == NULL)
		return;

	if (last->prev != NULL)
		last->prev->next = NULL;
	if (last->prev == NULL)
		eraseHead = 1;
	free(last);
	last = NULL;
	if (eraseHead == 1)
		*stack = NULL;
}
