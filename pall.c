#include "monty.h"
/**
 * my_pall - prints the stack
 * @head: stack's head
 * @i: not used
*/
void my_pall(stack_t **head, unsigned int i)
{
	stack_t *h;
	(void)i;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
