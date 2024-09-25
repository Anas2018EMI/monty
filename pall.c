#include "monty.h"

/* betty style doc for function pall goes there */
/**
 * pall - Entry point
 * @stack: first arg
 * @line_number: second arg
 *
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_number  __attribute__((unused)))
{
	stack_t *current = *stack;

	/* Check for stack underflow */
	if (!current)
	{
		return;
	}

	/* Print all the values on the stack */
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
