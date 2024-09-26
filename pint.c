#include "monty.h"

/* betty style doc for function pint goes there */
/**
 * pint - Entry point
 * @stack: first arg
 * @line_number: second arg
 *
 * Return: void
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (!*stack)
	{
		handle_error(4, line_number);
	}

	printf("%d\n", (*stack)->n);
}

