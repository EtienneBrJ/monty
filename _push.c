#include "monty.h"

void _push(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *new;
	stack_t *tmp;

	new = NULL;
	tmp = *stack;

	if (_isNumber(appData->arguments[1]) == 0)
		_errorHandler(INVALID_ARGUMENT_FORMAT);

	new = malloc(sizeof(stack_t));

	if (new == NULL)
	{
		return;
	}

	new->n = _atoi(appData->arguments[1]);
	new->next = NULL;

	if (*stack == NULL)
	{
		new->prev = NULL;
		*stack = new;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		new->prev = tmp;
		tmp->next = new;
	}
}
