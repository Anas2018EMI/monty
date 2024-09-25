#include "monty.h"

/* betty style doc for function is_integer goes there */
/**
 * is_integer - Entry point
 * @str: first arg
 *
 * Return: int
 */
int is_integer(char *str)
{
	int i;

	/* Check for negative sign */
	if (*str == '-')
		str++;

	/* Check for digits */
	for (i = 0; str[i]; i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}

	return (1);
}

/* betty style doc for function push goes there */
/**
 * push - Entry point
 * @stack: first arg
 * @line_number: second arg
 *
 * Return: void
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node;
	int value;

	/* Check for invalid input */
	if (!global.arg || !is_integer(global.arg))
	{
		handle_error(1, line_number);
	}

	/* Convert the string to an integer */
	value = atoi(global.arg);

	/* Create a new node */
	new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
		handle_error(2, line_number);
	}

	/* Set the values of the new node */
	new_node->n = value;
	new_node->prev = NULL;
	new_node->next = *stack;

	/* Update the previous node's next pointer */
	if (*stack)
		(*stack)->prev = new_node;

	/* Update the stack pointer */
	*stack = new_node;
}
