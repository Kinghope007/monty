#include "monty.h"

/**
 * _swap - swap data from top to previous
 * @stack: stack given main
 * @line_number: amount of lines
 *
 * Return: void
 */
void _swap(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = NULL;
	int tmp_n = 0;

	tmp = *stack;
	while (tmp)
	{
		tmp = tmp->next;
		stack_length++
	}
	if (stack_length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		status = EXIT_FAILURE;
		return;
	}
	
	tmp_n = tmp->n;
	tmp->n tmp_n;

	tmp_n tmp->next->n;
	tmp->next->n = tmp_n;
}

