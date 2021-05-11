#include "monty.h"

void _errorHandler(int prmErrorCode)
{
	switch(prmErrorCode)
	{
		case INVALID_ARGUMENT_FORMAT:
			printf("L%d: usage: push integer\n", appData->lineNumber);
			break;
		case PINT_EMPTY_STACK:
			printf("L%d: can't pint, stack empty\n", appData->lineNumber);
			break;
		case POP_EMPTY_STACK:
			printf("L%d: can't pop, stack empty\n", appData->lineNumber);
			break;
		case SWAP_EMPTY_STACK:
			printf("L%d: can't swap, stack empty\n", appData->lineNumber);
			break;
		case ADD_EMPTY_STACK:
			printf("L%d: can't add, stack empty\n", appData->lineNumber);
			break;
		case SWAP_STACK_TOO_SHORT:
			printf("L%d: can't swap, stack too short\n", appData->lineNumber);
			break;
		case ADD_STACK_TOO_SHORT:
			printf("L%d: can't add, stack too short\n", appData->lineNumber);
			break;
		case MALLOC_FAILED:
			printf("Error: malloc failed\n");
			break;
	}
	_freeAppData();
	exit(EXIT_FAILURE);
}
