#include "monty.h"
/**
 * main - main
 * @argc: argc
 * @argv: argv
 * Return: int
**/
int main(int argc, char *argv[])
{
	FILE *fp;
	char *s = NULL;
	size_t line_buf_size = 0;
	char *sa = NULL;
	int sx = 0, i = 0, j = 0, x = 1;
	stack_t *st = NULL;
	instruction_t st_fn[] = {{"push", push},
								{"pall", pall},
								{"pint", pint},
								{NULL, NULL}};

	if (argc != 2) 
		{
			fprintf(stderr, "USAGE: monty file\n");
			exit(EXIT_FAILURE);
		}
	fp = fopen(argv[1], "r");
	if (!fp)
		{
			fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
			exit(EXIT_FAILURE);
		}
	while (1)
	{
		x = 1;
		i = 0;
		while (x == 1)
		{
			x = getline(&s, &line_buf_size, fp);
			j++;
		}
		sx = toke2(s);
		sa = toke1(s);
		if ((sx == 6666 && strcmp(sa, st_fn[0].opcode) == 0))
		{
			fprintf(stderr, "L%i: usage: push integer\n", j);
			free_z(st);
			free(s);
			exit(EXIT_FAILURE);
		}
		while ((st_fn[i].opcode != NULL) && (strcmp(st_fn[i].opcode, sa) != 0))
		{
			i++;
		}
		if (!(st_fn[i].opcode))
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", j, sa);
			free_z(st);
			free(s);
			exit(EXIT_FAILURE);
		}
		st_fn[i].f(&st, sx);
		if (feof(fp))
			break;
	}
	free_z(st);
	free(s);
	fclose(fp);
	return (0);
}