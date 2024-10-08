#include "monty.h"

/* betty style doc for function swap goes there */
/**
 * swap - Entry point
 * @stack: first arg
 * @line_number: second arg
 *
 * Return: void
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (!*stack || !(*stack)->next)
	{
		handle_error(6, line_number);
	}

	temp = *stack;
	*stack = (*stack)->next;
	temp->next = (*stack)->next;
	(*stack)->next = temp;
	(*stack)->prev = NULL;
	temp->prev = *stack;
}
