#include "monty.h"

data_t *appData;

int main(int prmArgc, char **prmArgv)
{
	FILE *fileDescriptor;
	char *buffer = NULL;
	void (*func)(stack_t **, unsigned int);
	stack_t *queue = NULL;

	/*queue = malloc(sizeof(stack_t));

	if (queue == NULL)
		exit(EXIT_FAILURE);*/

	appData = malloc(sizeof(data_t));

	if (appData == NULL)
		exit(EXIT_FAILURE);

	if (prmArgc != 2)
		_errorHandler(INVALID_ARGUMENT_NUMBER);	/** @TODO: memory free to think **/

	fileDescriptor = fopen(prmArgv[1], "r");

	if (fileDescriptor == NULL)
		_errorHandler(INVALID_FILE); /** @TODO: memory free to think **/

	buffer = malloc(sizeof(char) * BUFFER_SIZE + 1);

	if (buffer == NULL)
		return (EXIT_FAILURE);

	while (fgets(buffer, BUFFER_SIZE, fileDescriptor))
	{
		appData->arguments = _strtow(buffer, OPCODE_COMMAND_SEPARATOR, NULL);

		if (appData->arguments == NULL)
		{
			fclose(fileDescriptor);
			_errorHandler(INVALID_PARSING_ARGUMENT);
		}

		func = _getCustomFunction(appData->arguments[0]);

		if (func != NULL)
			func(&queue, 1);
		_freeCharDoublePointer(appData->arguments);
	}

	_freeStackList(queue);
	fclose(fileDescriptor);
	if (buffer != NULL)
		free(buffer);
	buffer = NULL;
	free(appData);

	exit(EXIT_SUCCESS);
}
