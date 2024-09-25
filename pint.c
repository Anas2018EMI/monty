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
	/* Check for stack underflow */
	if (!*stack)
	{
		handle_error(4, line_number);
	}

	/* Print the value at the top of the stack */
	printf("%d\n", (*stack)->n);
}

