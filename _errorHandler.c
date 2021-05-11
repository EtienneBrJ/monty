#include "monty.h"

void _errorHandler(int prmErrorCode)
{
	switch(prmErrorCode)
	{
		case INVALID_ARGUMENT_FORMAT:
			printf("L%d: usage: push integer\n", appData->lineNumber);
			break;
		case EMPTY_STACK:
			printf("L%d: can't pint, stack empty\n", appData->lineNumber);
			break;
		case STACK_TOO_SHORT:
			printf("L%d: can't swap, stack too short\n", appData->lineNumber);
			break;
		case MALLOC_FAILED:
			printf("Error: malloc failed\n");
			break;
	}
	_freeAppData();
	exit(EXIT_FAILURE);
}
