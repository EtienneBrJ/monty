#include "monty.h"

/**
 * _errorDivStackTooShort - display when stack is too short
 */
void _errorDivStackTooShort(void)
{
	fprintf(stderr, "L%d: can't div, stack too short\n", appData->lineNumber);
}
