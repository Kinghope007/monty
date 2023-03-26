#include "monty.h"

/**
* _swap - function that swaps the top two elements of the stack
* @stack: head of stack
* @line_number: line count
*
* Return: nothing
*/
void _swap(stack_t **stack, unsigned int line_number)
{
	stack_t *h;
	int length = 0, temp;

	h = *stack;
	while (h)
	{
		h = h->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		fclose(global.file);
		free(global.argument);
		free_dlistint(*stack);
		exit(EXIT_FAILURE);
	}
	h = *stack;
	temp = h->n;
	h->n = h->next->n;
	h->next->n = temp;
}
