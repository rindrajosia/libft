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