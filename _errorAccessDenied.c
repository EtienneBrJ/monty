#include "monty.h"

/**
 * _errorAccessDenied - display error when file is not accessed
 */
void _errorAccessDenied(void)
{
	fprintf(stderr, "Error: Can't open file %s\n", appData->fileName);
}
