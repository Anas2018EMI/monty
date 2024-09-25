#include "monty.h"

/* betty style doc for function pop goes there */
/**
 * pop - Entry point
 * @stack: first arg
 * @line_number: second arg
 *
 * Return: void
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	/* Check for stack underflow */
	if (!*stack)
	{
		handle_error(5, line_number);
	}

	/* Remove the top element of the stack */
	temp = *stack;
	*stack = (*stack)->next;
	if (*stack)
		(*stack)->prev = NULL;

	free(temp);
}

