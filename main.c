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
	int sx = 0;
	stack_t *st = NULL;
	stack_t *tmp = NULL;
	instruction_t st_fn[] = {{"push", push},
								{"pall", pall},
								{NULL, NULL}};
	instruction_t *p = st_fn;

	if (argc != 2) 
		{
			fprintf(stderr, "USAGE: monty file");
			exit(EXIT_FAILURE);
		}
	fp = fopen(argv[1], "r");
	while (1)
	{
		if (feof(fp))
			break;
		getline(&s, &line_buf_size, fp);
		sx = toke2(s);
		sa = toke1(s);
		while ((strcmp(p->opcode, sa) != 0) && (p->opcode != NULL))
			p++;
		if (strcmp(p->opcode, "push") == 0)
			p->f(&st, sx);
		else
			p->f(&st, 0);
	}
	while (st)
	{
		tmp = st->next;
		free(st);
		st = tmp;
	}
	free(s);
	fclose(fp);
	return (0);
}