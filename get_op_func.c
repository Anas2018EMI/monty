#include "monty.h"

void (*get_op_func(char *opcode))(stack_t **, unsigned int)
{
        instruction_t instructions[] = {
                {"push", push},
                {"pall", pall},
                /* Add more opcodes and functions as needed */
                {NULL, NULL}
        };
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
