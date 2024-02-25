#include "libft.h"

char * ft_strcat( char * destination, const char * source )
{
    int len;
    int i;

    len = 0;
    i = 0;
    while (destination[len] != '\0')
	{
		len++;
	}
	while (source[i] != '\0')
	{
        destination[len] = source[i];
		i++;
        len++;
	}
    destination[len] = '\0';
    return destination;
}