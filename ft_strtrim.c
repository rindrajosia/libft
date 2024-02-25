#include "libft.h"

char * ft_strtrim(char const *s)
{
    int start;
    int len;
    char *new;

    start = 0;
    len = 0;
    while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
        start++;
    while (s[start + len] != ' ' && s[start + len] != '\n' && s[start + len] != '\t' && s[start + len] != '\0')
        len++;
    new = ft_strnew(len);
    if (new == NULL)
        return (NULL);
    new = ft_strsub(s, start, len);
    return (new);
}