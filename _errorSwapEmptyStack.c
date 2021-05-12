#include "monty.h"

/**
 * _errorSwapEmptyStack - display when stack is empty
 */
void _errorSwapEmptyStack(void)
{
	fprintf(stderr, "L%d: can't swap, stack empty\n", appData->lineNumber);
}
