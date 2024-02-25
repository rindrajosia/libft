#include "libft.h"

static int ft_word(char const *s, char c)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while(s[i] != '\0')
    {
        if((i == 0 && s[i] != c) || (s[i - 1] == c && s[i] != c && s[i] != '\0'))
            count++;
        i++;
    }
    return (count);
}

static int ft_word_len(char const *s, int start, char c)
{
    int count;

    count = 0;
    while(s[start] != '\0')
    {
        if(s[start] != c && s[start] != '\0')
            count++;
        else
            break;
        start++;
    }
    return (count);
}

char ** ft_strsplit(char const *s, char c)
{
    char **new;
    int i;
    int j;

    i = 0;
    j = 0;
    if (!(new = (char **) malloc (ft_word(s, c) * sizeof(char *))))
        return (NULL);
    while(s[i] != '\0')
    {
        if((i == 0 && s[i] != c) || (s[i - 1] == c && s[i] != c && s[i] != '\0'))
        {
            if (!(new[j] = ft_strnew(ft_word_len(s, i, c))))
                return (NULL);
            new[j] = ft_strsub(s, i, ft_word_len(s, i, c));
            j++;
            i += ft_word_len(s, i, c) - 1;
        }
        i++;
    }
    return (new);
}