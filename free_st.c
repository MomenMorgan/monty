#include "monty.h"
/**
* free_st - frees the  list
* @head: the first head of the stack
*/
void free_st(stack_t *head)
{
	stack_t *ptr;

	ptr = head;
	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}