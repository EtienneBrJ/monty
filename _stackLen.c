#include "monty.h"

/**
 * _stackLen - calcul the number of node in the linked list
 * @stack: stack
 *
 * Return: len
**/

int _stackLen(stack_t *stack)
{
	if (stack == NULL)
		return (0);
	return (_stackLen(stack->next) + 1);
}
