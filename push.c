#include "monty.h"
/**
 * my_push - adding new node to the stack
 * @head: double pointer to the stack head
 * @i: line_number
*/
void my_push(stack_t **head, unsigned int i)
{
	int n, j = 0, flag = 0;

	if (logs.args)
	{
		if (logs.args[0] == '-')
			j++;
		for (; logs.args[j] != '\0'; j++)
		{
			if (logs.args[j] > 57 || logs.args[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", i);
			fclose(logs.file);
			free(logs.data);
			free_st(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", i);
		fclose(logs.file);
		free(logs.data);
		free_st(*head);
		exit(EXIT_FAILURE); }
	n = atoi(logs.args);
	if (logs.swit == 0)
		newnode(head, n);
	else
		newqueue(head, n);
}
