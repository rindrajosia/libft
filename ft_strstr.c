#include "libft.h"

char * ft_strstr(const char * fullString, const char * substring)
{
    int j;
    int i;

    j = 0;
    i = 0;

    while (fullString[i] != '\0')
	{
        if(fullString[i] == substring[j])
        {
            while(fullString[i + j] == substring[j] && substring[j] != '\0')
            {
                j++;
            }
            if (substring[j] == '\0')
                return (((char *)fullString) + i);
        }
        j = 0;
		i++;
	}
    return (NULL);
}