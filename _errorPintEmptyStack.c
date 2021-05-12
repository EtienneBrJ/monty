#include "monty.h"

/**
 * _errorPintEmptyStack - display when stack is empty
 */
void _errorPintEmptyStack(void)
{
	fprintf(stderr, "L%d: can't pint, stack empty\n", appData->lineNumber);
}
