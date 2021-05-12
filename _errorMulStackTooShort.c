#include "monty.h"

/**
 * _errorMulStackTooShort - display when stack is too short
 */
void _errorMulStackTooShort(void)
{
	fprintf(stderr, "L%d: can't mul, stack too short\n", appData->lineNumber);
}
