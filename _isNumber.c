#include "monty.h"

/**
 * _isNumber - check if string is a number
 *
 * @s: string to verify
 *
 * Return: 1 if string is a number.
 */
int _isNumber(char *s)
{
	char *tmp = s;

	if (tmp == NULL)
		return (0);
	if (*tmp == '\0' || *tmp == '\n')
		return (1);
	if (!_isdigit(*tmp))
		return (0);
	else
		return (_isNumber(tmp + 1));
}
