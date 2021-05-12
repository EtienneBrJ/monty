#include "monty.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @prmPtr: source pointer
 * @prmOldSize: in pointer size
 * @prmNewSize: out pointer size
 *
 * Return: reallocated pointer
 */
void *_realloc(void *prmPtr, unsigned int prmOldSize, unsigned int prmNewSize)
{
	void *s = prmPtr;

	if (prmPtr == NULL)
	{
		s = malloc(prmNewSize);

		if (s == NULL)
			_errorHandler(MALLOC_FAILED);
		return (s);
	}
	if (prmNewSize == prmOldSize)
		return (prmPtr);
	if (prmNewSize == 0)
	{
		free(prmPtr);
		return (NULL);
	}

	s = malloc(prmNewSize);

	if (s == NULL)
		_errorHandler(MALLOC_FAILED);

	s = _memcpy(s, prmPtr, prmOldSize);
	free(prmPtr);

	return (s);
}
