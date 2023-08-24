#include "monty.h"
/**
 * pall_func - prints stack
 * @head: head pointer
 * @x: unused
 * Return: nothing
 * korir codes
 */
void pall_func(stack_t **head, unsigned int x)
{
	stack_t *h;
	(void)x;

	h = *head;
	if (h == NULL)
	{
		return;
	}
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
