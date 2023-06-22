#include "monty.h"
/**
 * newnode - adding new node
 * @head: stack's head
 * @v: the value
*/
void newnode(stack_t **head, int v)
{

	stack_t *new_node, *ptr;

	ptr = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (ptr)
		ptr->prev = new_node;
	new_node->n = v;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}