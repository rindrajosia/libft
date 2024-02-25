#include "libft.h"

int ft_memcmp( const void * pointer1, const void * pointer2, size_t size )
{
    size_t position;
    int delta;

    position = 0;
    delta = 0;
    while( position < size)
    {
        delta = ((unsigned char *)pointer1)[position] - ((unsigned char *)pointer2)[position];
        if ( delta )
            return delta;
        ++position;
    }
    return 0;
}