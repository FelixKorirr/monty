#include "monty.h"

/**
 * add_func - performs addition
 * @head: head pointer
 * @x: line no
 * Return: nothing
 * korir codes
 */

void add_func(stack_t **head, unsigned int x)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", x);
		fclose(newnode.ptr);
		free(newnode.value);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	h = *head;
	y = h->n + h->next->n;
	h->next->n = y;
	*head = h->next;

	free(h);
}
