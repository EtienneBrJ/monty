#include "monty.h"

/**
 * _pall - prints all the values on the stack
 *
 * @stack: stack
 *
 * @line_number: line number of monty file
 *
 * Return: void
**/

void _pall(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	_palFromStart(stack);
}
