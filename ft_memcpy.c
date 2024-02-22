void *ft_memcpy( void * destination, const void * source, size_t size )
{
    size_t  i;

    i = 0;
    while(i < size)
    {
        ((unsigned char *)destination)[i] = ((unsigned char *)source)[i];
        i++;
    }

    return (destination);
}