#include "libft.h"

void ft_putstr(char const *s)
{
    int  count;

    count = 0;
    while(s[count])
        ft_putchar(s[count++]);
}