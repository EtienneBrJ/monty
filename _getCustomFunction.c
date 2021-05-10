#include "monty.h"

/**
 * _getCustomFunction - check custom command
 *
 * @prmCommand: command
 *
 * Return: pointer function
 */
void (*_getCustomFunction(char *prmCommand))(int)
{
	int i = 0;

	customCommand_t fp[] = {
		{"push", _push},
		{"pall", _pall}
	};

	while (i < 2)
	{
		if (_strcmp(prmCommand, (fp + i)->commandName) == 0)
			return ((fp + i)->func);
		i++;
	}

	return (NULL);
}
