#include "monty.h"

/**
 * _errorModStackTooShort - display when stack is too short
 */
void _errorModStackTooShort(void)
{
	fprintf(stderr, "L%d: can't mod, stack too short\n", appData->lineNumber);
}
