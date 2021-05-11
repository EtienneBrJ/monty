#include "monty.h"

/**
 * _getCustomFunction - check custom command
 *
 * @prmCommand: command
 *
 * Return: pointer function
 */
void (*_getCustomFunction(char *prmCommand))(stack_t **, unsigned int)
{
	int i = 0;

	instruction_t fp[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"sub", _sub}
	};

	while (i < 7)
	{
		if (_strcmp(prmCommand, (fp + i)->opcode) == 0)
			return ((fp + i)->f);
		i++;
	}

	return (NULL);
}
