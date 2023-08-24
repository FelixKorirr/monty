#include "monty.h"

/**
 * pchar_func - prints char at top of stack
 * @head: head pointer
 * @x: line_number
 * Return: nothing
 * korir codes
 */

void pchar_func(stack_t **head, unsigned int x)
{
	stack_t *h;

	h = *head;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", x);
		fclose(newnode.ptr);
		free(newnode.value);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", x);
		fclose(newnode.ptr);
		free(newnode.value);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", h->n);
}
