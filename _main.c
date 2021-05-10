#include "monty.h"

int main(int prmArgc, char **prmArgv)
{
	int fileDescriptor;
	char *buffer, **commandArguments;
	void (*func)(int);

	if (prmArgc != 2)
		_errorHandler(INVALID_ARGUMENT_NUMBER);	/** @TODO: memory free to think **/

	fileDescriptor = open(prmArgv[1], O_RDONLY);

	if (fileDescriptor == -1)
		_errorHandler(INVALID_FILE); /** @TODO: memory free to think **/

	buffer = malloc(sizeof(char) * BUFFER_SIZE + 1);

	while (read(fileDescriptor, buffer, BUFFER_SIZE))
	{
		commandArguments = _strtow(buffer, OPCODE_COMMAND_SEPARATOR, NULL);

		if (commandArguments == NULL)
			_errorHandler(INVALID_PARSING_ARGUMENT); /** @TODO: memory free to think **/

		func = _getCustomFunction(commandArguments[0]);

		if (func != NULL)
			func(_atoi(commandArguments[1]));
	}

	free(buffer);
	_freeCharDoublePointer(commandArguments);

	exit(EXIT_SUCCESS);
}
