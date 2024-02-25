#include "libft.h"

void ft_strclr(char *s)
{
    int count;

    count = 0;
    while(s[count])
    {
        s[count] = '\0';
        count++;
    }
}