#include "libft.h"

void * ft_memchr( const void * memoryBlock, int searchedChar, size_t size )
{
    size_t  i;

    i = 0;
    while(i < size)
    {
        if(((unsigned char *)memoryBlock)[i] == (unsigned char)searchedChar)
            return (((void *)memoryBlock) + i);
        i++;
    }
    return (NULL);
}