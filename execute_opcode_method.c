#include "monty.h"

/* betty style doc for function execute_opcode goes there */
/**
 * execute_opcode - Entry point
 * @stack: first arg
 * @opcode: second arg
 * @line_number: third arg
 * Return: void
 */
void execute_opcode(stack_t **stack, char *opcode, unsigned int line_number)
{
	void (*op_func)(stack_t **, unsigned int);

	op_func = get_opcode_function(opcode);

	if (!op_func)
	{
		handle_error(3, line_number);
	}

	if (strcmp(opcode, "pall") == 0 && !*stack)
	{
		return;
	}

	op_func(stack, line_number);
}
