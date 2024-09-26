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

	if (!current)
	{
		return;
	}

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
