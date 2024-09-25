#include "monty.h"

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
                        fprintf(stderr, "L%u: unknown instruction %s\n", line_number, global_arg);
                        break;
                case 4:
                        fprintf(stderr, "L%u: can't pall, stack empty\n", line_number);
                        break;
                /* Add more error codes and messages as needed */
                default:
                        fprintf(stderr, "Unknown error\n");
                        break;
        }

        /* Free the stack and exit with failure status */
        free_stack(&global_stack);
        exit(EXIT_FAILURE);
}
