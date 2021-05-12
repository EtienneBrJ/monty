#include "monty.h"

/**
 * _errorHandler - error managment
 *
 * @prmErrorCode: error code
 */
void _errorHandler(int prmErrorCode)
{
	void (*func)();

	func = _getErrorFunction(prmErrorCode);

	if (func != NULL)
		func();
	_freeAppData();
	exit(EXIT_FAILURE);
}
