#include "monty.h"

/**
 * _errorMulEmptyStack - display when stack is empty
 */
void _errorMulEmptyStack(void)
{
	fprintf(stderr, "L%d: can't mul, stack empty\n", appData->lineNumber);
}
