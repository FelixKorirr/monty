#include "monty.h"

/**
 * swap_func - swaps top two elements of stack
 * @head: head pointer
 * @x: line no.
 * Return: nothing
 * korir codes
 */

void swap_func(stack_t **head, unsigned int x)
{
	stack_t *h;
	int length = 0;
	int y;

	h = *head;
	while (h)
	{
		h = h->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", x);
		fclose(newnode.ptr);
		free(newnode.value);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	h = *head;
	y = h->n;
	h->n = h->next->n;
	h->next->n = y;
}
