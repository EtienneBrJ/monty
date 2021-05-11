#include "monty.h"

void _mod(stack_t **stack, unsigned int line_number)
{
    stack_t *tmp;
    int top1, top2;

    top1 = (*stack)->n;

    if (*stack == NULL || (*stack)->next == NULL)
        _errorHandler(MOD_STACK_TOO_SHORT);

    if (top1 == 0)
        _errorHandler(NULLABLE_NUMBER);

    tmp = *stack;
    while (tmp->next->next != NULL)
        tmp = tmp->next;

    top2 = tmp->next->n;
    tmp->n = top2 % top1;

    _pop(stack, line_number);
}