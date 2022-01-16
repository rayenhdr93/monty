#include "monty.h"
char *toke1(char *s)
{
	int i = 0, found = 0;
	while (s)
	{
		if (s[i] == '#')
			return ("#");
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
	size_t i = 0, j = 0;
	int found = 0;
	char s1[48];

	while (i < strlen(s))
	{
		if (((s[i] >= 48) && (s[i] <= 57)))
		{
			found = 1;
			s1[j] = s[i];
			j++;
		}
		i++;
	}
	if (found == 1)
		return(atoi(s1));
	return(6666);
}