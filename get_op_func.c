#include "monty.h"

/* betty style doc for function get_op_func goes there */
/**
 * get_op_func - Entry point
 * @opcode: first arg
 * Return: void
 */
void (*get_op_func(char *opcode))(stack_t **, unsigned int)
{
	instruction_t instructions[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", div_op},
		{"mul", mul_op},
		{"mod", mod_op},
		/* Add more opcodes and functions as needed */
		{NULL, NULL}};
	int i;

	/* Search for the opcode in the instructions array */
	for (i = 0; instructions[i].opcode; i++)
	{
		if (strcmp(opcode, instructions[i].opcode) == 0)
		{
			return (instructions[i].f);
		}
	}

	/* If the opcode is not found, return NULL */
	return (NULL);
}
