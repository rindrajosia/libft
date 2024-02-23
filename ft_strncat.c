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