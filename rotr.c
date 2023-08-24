#include "monty.h"

/**
 *rotr_func- rotates stack to the bottom
 *@head: head pointer
 *@x: line no
 *Return: nothing
 *korir codes
 */

void rotr_func(stack_t **head, __attribute__((unused)) unsigned int x)
{
	stack_t *cpy;

	cpy = *head;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}

	while (cpy->next)
	{
		cpy = cpy->next;
	}

	cpy->next = *head;
	cpy->prev->next = NULL;
	cpy->prev = NULL;
	(*head)->prev = cpy;
	(*head) = cpy;
}
