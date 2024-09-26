#include "monty.h"

/* betty style doc for function mul_op goes there */
/**
 * mul_op - Entry point
 * @stack: first arg
 * @line_number: second arg
 *
 * Return: void
 */
void mul_op(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	/* Check for stack underflow */
	if (!*stack || !(*stack)->next)
	{
		handle_error(11, line_number);
	}

	/* Multiply the second top element of the stack by the top element */
	(*stack)->next->n *= (*stack)->n;

	/* Remove the top element of the stack */
	temp = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	free(temp);
}

