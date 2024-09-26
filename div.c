#include "monty.h"

/* betty style doc for function div_op goes there */
/**
 * div_op - Entry point
 * @stack: first arg
 * @line_number: second arg
 *
 * Return: void
 */
void div_op(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	/* Check for stack underflow */
	if (!*stack || !(*stack)->next)
	{
		handle_error(9, line_number);
	}

	/* Check for division by zero */
	if ((*stack)->n == 0)
	{
		handle_error(10, line_number);
	}

	/* Divide the second top element of the stack by the top element */
	(*stack)->next->n /= (*stack)->n;

	/* Remove the top element of the stack */
	temp = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	free(temp);
}

