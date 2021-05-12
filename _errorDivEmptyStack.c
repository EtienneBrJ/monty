#include "monty.h"

/**
 * _errorDivEmptyStack - display when stack is empty
 */
void _errorDivEmptyStack(void)
{
	fprintf(stderr, "L%d: can't div, stack empty\n", appData->lineNumber);
}
