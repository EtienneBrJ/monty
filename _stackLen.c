#include "monty.h"

int _stackLen(stack_t *stack)
{
	if (stack == NULL)
		return (0);
	return _stackLen(stack->next) + 1;
}
