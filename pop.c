#include "monty.h"
/**
 * my_pop - prints the top
 * @head: stack's head
 * @i: number of the line
*/
void my_pop(stack_t **head, unsigned int i)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", i);
		fclose(logs.file);
		free(logs.data);
		free_st(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
