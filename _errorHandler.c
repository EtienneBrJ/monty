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
	}
	_freeAppData();
	exit(EXIT_FAILURE);
}
