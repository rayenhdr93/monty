#include "monty.h"
/**
 * main - main
 * @argc: argc
 * @argv: argv 
 * Return: int 
 */
int main(int argc, char* argv[])
{
	FILE *fp;
	char *s = NULL;
	size_t line_buf_size = 0;
	char *token;
	instruction_t fun;
	int i = 0;

	printf("%d\n", argc);
	fp = fopen(argv[1],"r");
	
	while(1) 
	{
		getline(&s, &line_buf_size, fp);
		if (feof(fp))
			{
				break ;
			}
		token = strtok(s, " ");
		i = 0;
		while (fun != token)
		{
			i++;
		}
		token = strtok(NULL, " ");
		if (token != NULL)
		{
			token = strtok(NULL, " ");
		}
	}
	fclose(fp);
	return (0);
}
