#include "libft.h"

char * ft_strrchr(const char * string, int searchedChar)
{
    int i;

    i = ft_strlen(string);
    if ((char)searchedChar == '\0')
		return (((char *)string) + i);
    while (i >= 0)
	{
        if(string[i] == (char)searchedChar)
            return (((char *)string) + i);
		i--;
	}
    return (NULL);
}