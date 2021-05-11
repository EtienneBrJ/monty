#include "monty.h"

/**
 * _freeAppData - free all
 * @void: void
 * Return: void
 */

void _freeAppData(void)
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
	if (appData->fileDescriptor != NULL)
		fclose(appData->fileDescriptor);
	free(appData);
	appData = NULL;
}
