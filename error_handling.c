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
	switch (error_code)
	{
		case 1:
			fprintf(stderr, "L%u: usage: push integer\n", line_number);
			break;
		case 2:
			fprintf(stderr, "Error: malloc failed\n");
			break;
		case 3:
			fprintf(stderr, "L%u: unknown instruction %s\n", line_number, global.arg);
			break;
		case 4:
			fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
			break;
		case 5:
			fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
			break;
		case 6:
			fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
			break;
			/* Add more error codes and messages as needed */
		default:
			fprintf(stderr, "Unknown error\n");
			break;
	}

	/* Free the stack and exit with failure status */
	free_stack(&global.stack);
	exit(EXIT_FAILURE);
}
