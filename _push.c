#include "monty.h"

/**
 * _push - push an element to the stack
 *
 * @stack: stack
 *
 * @line_number: line number of monty file
 *
 * Return: void
**/

void _push(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	switch (appData->way)
	{
		case FIFO:
			_pushToEnd(stack);
			break;
		case LIFO:
		default:
			_pushToStart(stack);
			break;
	}
}
