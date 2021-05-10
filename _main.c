#include "monty.h"

int main(int prmArgc, char **prmArgv)
{
	FILE *fileDescriptor;
	char *buffer = NULL, **commandArguments;
	void (*func)(int);

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
		commandArguments = _strtow(buffer, OPCODE_COMMAND_SEPARATOR, NULL);

		if (commandArguments == NULL)
		{
			fclose(fileDescriptor);
			_errorHandler(INVALID_PARSING_ARGUMENT);
		}

		func = _getCustomFunction(commandArguments[0]);

		if (func != NULL)
			func(_atoi(commandArguments[1]));
		_freeCharDoublePointer(commandArguments);
	}

	fclose(fileDescriptor);
	if (buffer != NULL)
		free(buffer);
	buffer = NULL;

	exit(EXIT_SUCCESS);
}
