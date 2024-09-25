#include "monty.h"

void free_stack(stack_t **stack)
{
        stack_t *current = *stack;
        stack_t *next;

        /* Free all the nodes in the stack */
        while (current)
        {
                next = current->next;
                free(current);
                current = next;
        }

        /* Set the stack pointer to NULL */
        *stack = NULL;
}
