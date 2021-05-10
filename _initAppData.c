#include "monty.h"

void _initAppData()
{
	appData = malloc(sizeof(data_t));

	if (appData == NULL)
		exit(EXIT_FAILURE);

	appData->arguments = NULL;
	appData->buffer = NULL;
	appData->queue = NULL;
}
