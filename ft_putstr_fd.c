#include "libft.h"

void ft_putstr_fd(char const *s, int fd)
{
    int  count;

    count = 0;
    while(s[count])
        ft_putchar_fd(s[count++], fd);
}