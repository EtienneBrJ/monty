#include "monty.h"

void _initAppData()
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
