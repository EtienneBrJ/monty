#include "monty.h"

/**
 * _checkArguments - check arguments
 *
 * Return: 1
 *
 */

int _checkArguments(void)
{
	if (strcmp(appData->arguments[0], "push") == 1)
		if (_isNumber(appData->arguments[1]) == 0)
			_errorHandler(INVALID_ARGUMENT_FORMAT);

	return (1);
}
