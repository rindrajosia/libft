void * ft_memccpy( void * destination, const void * source, int ch, size_t maxSize )
{
    size_t  i;

    i = 0;
    while(i < maxSize)
    {
        ((unsigned char *)destination)[i] = ((unsigned char *)source)[i];
        if (((unsigned char *)source)[i] == (unsigned char)ch)
            break ;
        i++;
    }

    return (destination);
}