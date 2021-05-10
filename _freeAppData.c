#include "monty.h"

void _freeAppData()
{
	if (appData->arguments != NULL)
		_freeCharDoublePointer(appData->arguments);
	appData->arguments = NULL;
	if (appData->buffer != NULL)
		free(appData->buffer);
	appData->buffer = NULL;
	if (appData->queue != NULL)
		_freeStackList(appData->queue);
	appData->queue = NULL;
	free(appData);
	appData = NULL;
}
