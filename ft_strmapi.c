size_t ft_strlen( const char * theString )
{
    size_t  count;

    count = 0;
    while(theString[count])
    {
        count++;
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
    return (strnew);
}

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