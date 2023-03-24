#include "monty.h"

/**
 * _sub - substracts the first two nodes of the stack
 * @stack: stack given by main
 * @line_number: line counter
 *
 * Return: void
 */
void _sub(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = NULL;
	int result;

        tmp = *stack;
        while (tmp)
        {
                tmp = tmp->next;
                stack_length++
        }
        if (stack_length < 2)
        {
                fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
                status = EXIT_FAILURE;
                return;
        }

	result = ((*stack)->next->n) - ((*stack)->n);
	pop(stack, line_number);/*for top node*/
	(*stack)->n result;
}
