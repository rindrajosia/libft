#include "libft.h"

char * ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *new;
    size_t i;

    new = ft_strnew(ft_strlen(s));
    i = 0;
    while(s[i])
    {
        new[i] = f(i, s[i]);
        i++;
    }
    return (new);
}