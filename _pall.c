#include "monty.h"

/**
 * _pall - print the stack
 * @stack: stack given by main
 * @line_number: unused line count
 *
 * Return: nothing
 */
void _pall(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	print_stack(*stack);
}
