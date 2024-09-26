#include "monty.h"

/* betty style doc for function sub goes there */
/**
 * sub - Entry point
 * @stack: first arg
 * @line_number: second arg
 *
 * Return: void
 */
void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	/* Check for stack underflow */
	if (!*stack || !(*stack)->next)
	{
		handle_error(8, line_number);
	}

	/* Subtract the top element of the stack from the second top element */
	(*stack)->next->n -= (*stack)->n;

	/* Remove the top element of the stack */
	temp = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	free(temp);
}


