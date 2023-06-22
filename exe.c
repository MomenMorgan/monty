#include "monty.h"
/**
* execute - runs the optcode function
* @st: double pointer to the head
* @i: counter
* @file: monty ffile pointer
* @data: the linee data
* Return: 1 or 0
*/
int exe(char *data, stack_t **st, unsigned int i, FILE *file)
{
	instruction_t inst[] = {
				{"push", my_push}, {"pall", my_pall}, {"pint", my_pint},
				{"pop", my_pop},
				{"swap", my_swap},
				{NULL, NULL}
				};
	unsigned int j = 0;
	char *pt;

	pt = strtok(data, " \n\t");
	if (pt && pt[0] == '#')
		return (0);
	logs.args = strtok(NULL, " \n\t");
	while (inst[j].opcode && pt)
	{
		if (strcmp(pt, inst[j].opcode) == 0)
		{	inst[j].f(st, i);
			return (0);
		}
		j++;
	}
	if (pt && inst[j].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", i, pt);
		fclose(file);
		free(data);
		free_st(*st);
		exit(EXIT_FAILURE); }
	return (1);
}