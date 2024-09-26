#include "monty.h"

/* betty style doc for function handle_error goes there */
/**
 * handle_error - Entry point
 * @error_code: first arg
 * @line_number: second arg
 * Return: void
 */
void handle_error(int error_code, unsigned int line_number)
{
	const char *error_messages[] = {
		"usage: push integer",
		"Error: malloc failed",
		"unknown instruction",
		"can't pint, stack empty",
		"can't pop an empty stack",
		"can't swap, stack too short",
		"can't add, stack too short",
		"can't sub, stack too short",
		"can't div, stack too short",
		"division by zero",
		"can't mul, stack too short"
	};
	if (error_code < 1 || error_code > 11)
	{
		fprintf(stderr, "Unknown error\n");
	}
	else
	{
		fprintf(stderr, "L%u: ", line_number);
		if (error_code == 3)
			fprintf(stderr, "%s %s\n", error_messages[error_code - 1], global.arg);
		else
			fprintf(stderr, "%s\n", error_messages[error_code - 1]);
	}
	free_stack(&global.stack);
	exit(EXIT_FAILURE);
}

