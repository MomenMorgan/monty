#include "monty.h"
logs_t logs = {NULL, NULL, NULL, 0};
/**
* main - the monty code build
* @argc: number of arguments
* @argv: the file address
* Return: on success 0 on faliure exit
*/
int main(int argc, char *argv[])
{
	char *data;
	FILE *file;
	size_t size = 0;
	ssize_t get_line = 1;
	stack_t *st = NULL;
	unsigned int i = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	logs.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (get_line > 0)
	{
		data = NULL;
		get_line = getline(&data, &size, file);
		logs.data = data;
		i++;
		if (get_line > 0)
		{
			exe(data, &st, i, file);
		}
		free(data);
	}
	free_st(st);
	fclose(file);
return (0);
}
