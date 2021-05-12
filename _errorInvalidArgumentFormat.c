#include "monty.h"

/**
 * _errorInvalidArgumentFormat - display when wrong argument found
 */
void _errorInvalidArgumentFormat(void)
{
	fprintf(stderr, "L%d: usage: push integer\n", appData->lineNumber);
}
