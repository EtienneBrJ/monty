#include "monty.h"

/**
 * _errorPcharOutOfRange - display when number is out of range
 */
void _errorPcharOutOfRange(void)
{
	fprintf(
		stderr,
		"L%d: can't pchar, value out of range\n",
		appData->lineNumber
	);
}
