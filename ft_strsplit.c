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

void * ft_memalloc(size_t size)
{
    void *memory;
    size_t i;

    i = 0;
    if (!(memory = (unsigned char *) malloc (size * sizeof(unsigned char))))
        return (NULL);
    while(i < size)
        ((unsigned char *)memory)[i++] = '\0';
    return (memory);
}

char * ft_strnew(size_t size)
{
    char *strnew;

    strnew = (char *)ft_memalloc(size + 1);
    if (strnew == NULL)
        return (NULL);
    return (strnew);
}

char *ft_strncat( char * destination, const char * source, size_t size  )
{
    size_t len;
    size_t i;

    len = 0;
    i = 0;
    while (destination[len] != '\0')
	{
		len++;
	}
    while (source[i] != '\0' && i < size)
	{
        destination[len] = source[i];
		i++;
        len++;
	}
    destination[len] = '\0';
    return destination;
}

char * ft_strsub(char const *s, unsigned int start, size_t len)
{
    char *new;

    new = ft_strnew(len);
    if (new == NULL)
        return (NULL);
    ft_strncat(new, s + start, len);
    return (new);
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