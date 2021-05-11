#include "monty.h"

void _rotr(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
    int swap;
    stack_t *tmp = *stack;

    if (*stack == NULL || (*stack)->next == NULL)
        return;
        
    swap = (*stack)->n;

    while (tmp->next != NULL)
    {
        tmp->n = tmp->next->n;
        tmp = tmp->next;
    }
    tmp->n = swap;

}