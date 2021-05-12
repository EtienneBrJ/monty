#include "monty.h"

/**
 * _errorUnknownInstruction - display when unknown instruction is found
 */
void _errorUnknownInstruction(void)
{
	fprintf(
		stderr,
		"L%d: unknown instruction %s\n",
		appData->lineNumber,
		appData->arguments[0]
	);
}
