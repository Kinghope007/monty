#include "monty.h"

/**
 * _div - divides the next top value by the top valur
 * @stack: stack given by main
 * @line_number: line count
 *
 * Return: void
 */
void _mul(stack_t **stack, unsigned int line_number)
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
                fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		status = EXIT_FAILURE;
                return;
        }
	tmp = *stack;
	if (tmp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		status = EXIT_FAILURE;
		return;
	}

	result = ((*stack)->next->n) / ((*stack)->n);
	pop(stack, line_number); /*for top node*/
	(*stack)->n = result;
}
