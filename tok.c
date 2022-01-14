#include "monty.h"
char *toke1(char *s)
{
    while (s)
    {
        if ((*s >= 97) && (*s <= 122))
        {
            s[4] = '\0';
            break;
        }
        else
        s++;
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