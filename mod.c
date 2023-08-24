#include "monty.h"

/**
 * mod_func - returns the remainder
 * @head: head pointer
 * @x: line no
 * Return: nothing
 * korir codes
 */

void mod_func(stack_t **head, unsigned int x)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", x);
		fclose(newnode.ptr);
		free(newnode.value);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", x);
		fclose(newnode.ptr);
		free(newnode.value);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	y = h->next->n % h->n;
	h->next->n = y;
	*head = h->next;

	free(h);
}
