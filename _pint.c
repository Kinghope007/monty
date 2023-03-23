#include "monty.h"
/**
 * _pint - print the top data
 * @stack: stack given by main
 * @line_number: amount of line
 *
 * Return: void
 */
void _pint(stack_t **stack, unsigned int line_number)
{
	if (!stack || !(*stack))
	{
		fprintf(stdder, "L<line_number>: can't pint, stack empty\n", line_number);
		status = EXIT_FAILURE;
		return;
	}
	print("%d\n", (*stack)->n);
}
