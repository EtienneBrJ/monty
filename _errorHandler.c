#include "monty.h"

void _errorHandler(int prmErrorCode __attribute__((unused)))
{
	_freeAppData();
}
