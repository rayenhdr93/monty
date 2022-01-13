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
	char *token;
	stack_t *st = NULL;
	instruction_t st_fn[] = {{"push", push},
								{"pall", pall},
								{NULL, NULL}};
	int i = 0;

	if (argc != 2)
	{
		exit(0);
	}
	fp = fopen(argv[1], "r");
	while (1)
	{
		getline(&s, &line_buf_size, fp);
		token = strtok(s, " ");
		i = 0;
		while ((strcmp(st_fn[i].opcode, token) != 0) && (st_fn[i].opcode != NULL))
			i++;
		if (token != NULL)
			token = strtok(NULL, " ");
		else
			token = "5";
		if (st_fn[i].opcode != NULL)
		{
			st_fn[i].f(&st, atoi(token));
		}
		if (feof(fp))
			break;
	}
	free(st);
	fclose(fp);
	return (0);
}
