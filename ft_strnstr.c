size_t ft_strlen( const char * theString )
{
    size_t  count;

    count = 0;
    while(theString[count])
    {
        count++;
    }
    return (count);
}

char * ft_strnstr( const char * fullString, const char * substring, size_t len)
{
    int j;
    int i;

    j = 0;
    i = 0;
    if (ft_strlen(substring) == 0)
        return ((char *)fullString);
    while (fullString[i] != '\0' && i < len)
	{
        if(fullString[i] == substring[j])
        {
            while(fullString[i + j] == substring[j] && substring[j] != '\0' && i + j < len)
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