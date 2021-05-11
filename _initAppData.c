#include "monty.h"

/**
 * _initAppData - init variable
 * @void: void
 * Return: void
 */

void _initAppData(void)
{
	appData = malloc(sizeof(data_t));

	if (appData == NULL)
		_errorHandler(MALLOC_FAILED);

	appData->arguments = NULL;
	appData->buffer = NULL;
	appData->queue = NULL;
	appData->fileDescriptor = NULL;
	appData->lineNumber = 0;
}
