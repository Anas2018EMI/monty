#include "monty.h"

/* betty style doc for function add goes there */
/**
 * add - Entry point
 * @stack: first arg
 * @line_number: second arg
 * Return: void
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	/* Check for stack underflow */
	if (!*stack || !(*stack)->next)
	{
		handle_error(7, line_number);
	}

	/* Add the top two elements of the stack */
	(*stack)->next->n += (*stack)->n;

	/* Remove the top element of the stack */
	temp = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	free(temp);
}

