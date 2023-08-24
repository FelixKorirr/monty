#include "monty.h"

/**
 * mul_func - performs multiplication
 * @head: stack head
 * @x: line no
 * Return: nothing
 * korir codes
 */

void mul_func(stack_t **head, unsigned int x)
{
	stack_t *h;
	int length = 0, y;

	h = *head;
	while (h)
	{
		h = h->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", x);
		fclose(newnode.ptr);
		free(newnode.value);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	h = *head;
	y = h->next->n * h->n;
	h->next->n = y;
	*head = h->next;

	free(h);
}
