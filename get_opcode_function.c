#include "monty.h"

/* betty style doc for function get_opcode_function goes there */
/**
 * get_opcode_function - Entry point
 * @opcode: first arg
 * Return: void
 */
void (*get_opcode_function(char *opcode))(stack_t **, unsigned int)
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
		{NULL, NULL}};
	int i;

	for (i = 0; instructions[i].opcode; i++)
	{
		if (strcmp(opcode, instructions[i].opcode) == 0)
		{
			return (instructions[i].f);
		}
	}

	return (NULL);
}
