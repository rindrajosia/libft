#include "libft.h"

char * ft_strmap(char const *s, char (*f)(char))
{
    char *new;
    size_t i;

    new = ft_strnew(ft_strlen(s));
    if (new == NULL)
        return (NULL);
    i = 0;
    while(s[i])
    {
        new[i] = f(s[i]);
        i++;
    }
    return (new);
}