#include "monty.h"

/**
 * pstr_func - prints the string starting at the top of the stack
 * @head: head pointer
 * @counter: line no
 * Return: nothing
 * korir codes
 */

void pstr_func(stack_t **head, unsigned int x)
{
	stack_t *h;
	(void)x;

	h = *head;

	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}

	printf("\n");
}
