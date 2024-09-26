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

	if (!*stack || !(*stack)->next)
	{
		handle_error(7, line_number);
	}

	(*stack)->next->n += (*stack)->n;

	temp = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	free(temp);
}

