#include "monty.h"

void _pall(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *tmp = *stack, *prev;

	if (tmp == NULL)
		return;

	while (tmp != NULL)
	{
		prev = tmp;
		tmp = tmp->next;
	}

	if (prev != NULL)
	{
		while(prev != NULL)
		{
			printf("%d\n", prev->n);
			prev = prev->prev;
		}
	}
}
