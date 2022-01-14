#include "monty.h"
char *toke1(char *s)
{
	int i = 0, found = 0;
	while (s)
	{
		if (!((s[i] >= 97) && (s[i] <= 122)))
		{
			if (found == 1)
			{
				s[i] = '\0';
				return(s);
			}
			else
			s++;
		}
		else
		{
			i++;
			found = 1;
		}
	}
	return(s);
}
int toke2(char *s)
{
	size_t i = 0;
	int x = 0, found = 0;

	while (i < strlen(s))
	{
		if ((s[i] >= 48) && (s[i] <= 57))
		{
			x = x + (s[i] - 48);
			found = 1;
		}
		i++;
	}
	if (found == 1)
		return(x);
	return(6666);
}