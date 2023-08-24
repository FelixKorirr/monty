#include "monty.h"

/**
 * div_func - performs division
 * @head: head pointer
 * @x: line number
 * Return: nothing
 * korir codes
 */

void div_func(stack_t **head, unsigned int x)
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
		fprintf(stderr, "L%d: can't divide, stack too short\n", x);
		fclose(newnode.ptr);
		free(newnode.value);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: divide by zero\n", x);
		fclose(newnode.ptr);
		free(newnode.value);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	y = h->next->n / h->n;
	h->next->n = y;
	*head = h->next;
	free(h);
}
