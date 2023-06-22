#include "monty.h"
/**
 * my_add - adds the top two elements of the stack.
 * @head: stack's head
 * @i: number of the line
*/
void my_add(stack_t **head, unsigned int i)
{
	stack_t *h;
	int length = 0, pt;

	h = *head;
	while (h)
	{
		h = h->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", i);
		fclose(logs.file);
		free(logs.data);
		free_st(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	pt = h->n + h->next->n;
	h->next->n = pt;
	*head = h->next;
	free(h);
}