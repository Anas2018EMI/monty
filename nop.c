#include "monty.h"

/* betty style doc for function nop goes there */
/**
 * nop - Entry point
 * @stack: first arg
 * @line_number: second arg
 *
 * Return: void
 */
void nop(stack_t **stack, unsigned int line_number)
{
	/* The nop opcode doesn't do anything */
	(void)stack;
	(void)line_number;
}
