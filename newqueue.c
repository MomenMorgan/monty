#include "monty.h"
/**
 * queue_p - prints the top
 * @head: stack's head
 * @i: number of the line
*/
void queue_p(stack_t **head, unsigned int i)
{
	(void)head;
	(void)i;
	logs.swit = 1;
}

/**
 * newqueue - add node to the end of stack
 * @v: new value
 * @head: stack's head
*/
void newqueue(stack_t **head, int v)
{
	stack_t *new_node, *ptr;

	ptr = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = v;
	new_node->next = NULL;
	if (ptr)
	{
		while (ptr->next)
			ptr = ptr->next;
	}
	if (!ptr)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		ptr->next = new_node;
		new_node->prev = ptr;
	}
}