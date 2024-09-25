#include "monty.h"

void execute_opcode(stack_t **stack, char *opcode, unsigned int line_number)
{
        void (*op_func)(stack_t **, unsigned int);

        /* Get the appropriate function for the opcode */
        op_func = get_op_func(opcode);

        /* If the opcode is not found, handle the error */
        if (!op_func)
        {
                handle_error(3, line_number);
        }

        /* Execute the opcode */
        op_func(stack, line_number);
}
