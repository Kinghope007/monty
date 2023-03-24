#include "monty.h"

/**
 * _add - adds the first nodes of the stack
 * @stack: stack given by main
 * @line_number: line count
 *
 * Return: void
 */
void _add(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = NULL;
        int tmp_n = 0;
	int result;

        tmp = *stack;
        while (tmp)
        {
                tmp = tmp->next;
                stack_length++
        }
	if (stack_length < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		status = EXIT_FAILURE;
		return;
	}

	result = ((*stack)->next->n) + ((*stack)->n);
	pop(stack, line_number);/*for top node*/
	(*stack)->n = result;
}
