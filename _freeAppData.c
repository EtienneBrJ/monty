#include "monty.h"

/**
 * _freeAppData - free all
 * @void: void
 * Return: void
 */

void _freeAppData(void)
{
	if (!appData && appData->arguments != NULL)
		_freeCharDoublePointer(appData->arguments);
	appData->arguments = NULL;
	if (!appData && appData->buffer != NULL)
		free(appData->buffer);
	appData->buffer = NULL;
	if (!appData && appData->queue != NULL)
		_freeStackList(appData->queue);
	appData->queue = NULL;
	if (!appData && appData->fileDescriptor != NULL)
		fclose(appData->fileDescriptor);
	free(appData);
	appData = NULL;
}
