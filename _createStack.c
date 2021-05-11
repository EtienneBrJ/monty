#include "monty.h"

stack_t *_createStack(int prmNumber)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));

	if (new == NULL)
		_errorHandler(MALLOC_FAILED);

	new->n = prmNumber;
	new->next = NULL;
	new->prev = NULL;

	return (new);
}
