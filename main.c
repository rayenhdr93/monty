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
								{"pop", pop},
								{"swap", swap},
								{"add", add},
								{"nop", nop},
								{"sub", sub},
								{"div", divvv},
								{"mul", mult},
								{NULL, NULL}};

	if (argc != 2) 
		{
			fprintf(stderr, "USAGE: monty file\n");
			exit(EXIT_FAILURE);
		}
	fp = fopen(argv[1], "r");
	if (!fp)
		{
			fprintf(stderr, "Error: can't open file %s\n", argv[1]);
			exit(EXIT_FAILURE);
		}
	while (!feof(fp))
	{
		x = 1;
		i = 0;
		while (x == 1)
		{
			x = getline(&s, &line_buf_size, fp);
			j++;
		}
		if (x < 0)
			break;
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
		if (i > 0)
			sx = j;
		st_fn[i].f(&st, sx);
	}
	free_z(st);
	free(s);
	fclose(fp);
	return (0);
}