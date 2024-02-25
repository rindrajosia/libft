#include "libft.h"

char * ft_strchr( const char * string, int searchedChar )
{
    int i;

    i = 0;
    while (string[i] != '\0')
	{
        if(string[i] == (char)searchedChar)
            return (((char *)string) + i);
		i++;
	}
    if ((char)searchedChar == '\0')
		return (((char *)string) + i);
    return (NULL);
}