#include <ctype.h>
#include "monty.h"

/**
 * print_stack - prints the contents of a stack_t stack
 * @stack: stack head
 *
 * Return: number of elements of the list
 */
size_t print_stack(const stack_t *stack)
{
	size_t c = 0;

	while (stack)
	{
		printf("%d\n", stack->n);
		stack = stack->next;
		c++;
	}

	return (c);
}

/**
 * _isalpha - checks if a string is a digit
 * @c: string to check
 *
 * Return: 1 if success, 0 if not
 */

int _isalpha(int *c)
{
	if (!c || *c == '\0')
		return (0);
	if (*c == '-')
		c++;
	while (*c)
	{
		if (isdigit(*c) == 0)
			return (0);
		c++;
	}
	return (1);

}

/**
 * isnumber - checks if a string is a number
 * @str: provided string
 *
 * Return: 1 if the string is a number, else, 0.
 */
int isnumber(char *str)
{
	int i;

	if (!str)
		return (0);

	for (i = 0; str[i]; i++)
		if (i < '0' || i > '9')
			return (0);

	return (1);
}
