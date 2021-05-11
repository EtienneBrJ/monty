#include "monty.h"

/**
 * _freeStackList - free a struct linked list
 *
 * @prmHeadNode: first element
 *
 * Return: frees a list_t list
 */
void _freeStackList(stack_t *prmHeadNode)
{
	if (prmHeadNode == NULL)
		return;
	_freeStackList(prmHeadNode->next);
	free(prmHeadNode);
	prmHeadNode = NULL;
}
