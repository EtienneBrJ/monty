#include "monty.h"

/**
 * _errorPcharStackTooShort - display when stack is too short
 */
void _errorPcharStackTooShort(void)
{
	fprintf(stderr, "L%d: can't pchar, stack too short\n", appData->lineNumber);
}
