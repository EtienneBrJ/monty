#include "monty.h"

/**
 * _errorNullableNumber - display when number is nullable
 */
void _errorNullableNumber(void)
{
	fprintf(stderr, "L%d: division by zero\n", appData->lineNumber);
}
