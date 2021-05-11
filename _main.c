#include "monty.h"

data_t *appData;

int main(int prmArgc, char **prmArgv)
{
	void (*func)(stack_t **, unsigned int);

	_initAppData();

	if (prmArgc != 2)
		_errorHandler(INVALID_ARGUMENT_NUMBER);	/** @TODO: memory free to think **/

	appData->fileDescriptor = fopen(prmArgv[1], "r");

	if (appData->fileDescriptor == NULL)
		_errorHandler(INVALID_FILE); /** @TODO: memory free to think **/

	appData->buffer = malloc(sizeof(char) * BUFFER_SIZE + 1);

	if (appData->buffer == NULL)
		_errorHandler(MALLOC_FAILED);

	while (fgets(appData->buffer, BUFFER_SIZE, appData->fileDescriptor))
	{
		if (appData->buffer[0] == '\n')
			continue;
		appData->lineNumber++;
		appData->arguments = _strtow(appData->buffer, COMMAND_SEPARATOR, NULL);

		if (appData->arguments == NULL)
			_errorHandler(INVALID_PARSING_ARGUMENT);

		func = _getCustomFunction(appData->arguments[0]);

		if (func != NULL)
			func(&appData->queue, appData->lineNumber);
		_freeCharDoublePointer(appData->arguments);
		appData->arguments = NULL;
	}

	_freeAppData();

	exit(EXIT_SUCCESS);
}
