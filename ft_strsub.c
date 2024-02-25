#include "libft.h"

char * ft_strsub(char const *s, unsigned int start, size_t len)
{
    char *new;

    new = ft_strnew(len);
    if (new == NULL)
        return (NULL);
    ft_strncat(new, s + start, len);
    return (new);
}