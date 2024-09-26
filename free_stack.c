#include "monty.h"

/* betty style doc for function free_stack goes there */
/**
 * free_stack - Entry point
 * @stack: first arg
 * Return: void
 */
void free_stack(stack_t **stack)
{
	stack_t *current = *stack;
	stack_t *next;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*stack = NULL;
}
