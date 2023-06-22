#include "monty.h"
/**
 * my_pint - prints the top
 * @head: stack head
 * @i: line_number
*/
void my_pint(stack_t **head, unsigned int i)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", i);
		fclose(logs.file);
		free(logs.data);
		free_st(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}