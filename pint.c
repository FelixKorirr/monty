#include "monty.h"

/**
 * pint_func - prints top value of stack
 * @head: head pointer
 * @x: line_number
 * Return: nothing
 * korir codes
 */

void pint_func(stack_t **head, unsigned int x)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", x);
		fclose(newnode.ptr);
		free(newnode.value);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*head)->n);
}
