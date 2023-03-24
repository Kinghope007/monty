#include "monty.h"

/**
 * _pop - pops the very top
 * @stack: stack given by main
 * @line_number: line number for error messages
 *
 * Return: void
 */
void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = NULL;

	if (!stack || !*stack)
	{
		fprintf(stdder, "L<line_number>: can't pop an empty stack\n", line_number);
		status = EXIT_FAILURE;
		return;
	}

	tmp = (*stack)->next;
	free(*stack);
}
