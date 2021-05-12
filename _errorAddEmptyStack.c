#include "monty.h"

/**
 * _errorAddEmptyStack - display when stack is empty
 */
void _errorAddEmptyStack(void)
{
	fprintf(stderr, "L%d: can't add, stack empty\n", appData->lineNumber);
}
