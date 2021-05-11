#include "monty.h"

/**
 * _freeCharDoublePointer - free memory of a double pointer
 *
 * @prmPtr: double pointer
 */
void _freeCharDoublePointer(char **prmPtr)
{
	int cLoop = 0;

	if (prmPtr == NULL)
		return;

	while (prmPtr[cLoop] != NULL)
	{
		free(prmPtr[cLoop]);
		prmPtr[cLoop] = NULL;
		cLoop++;
	}
	if (prmPtr != NULL)
		free(prmPtr);
	prmPtr = NULL;
}
