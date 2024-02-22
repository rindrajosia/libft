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

char * ft_strdup( const char * source )
{
    int i;
    char *destination;

    i = 0;
    destination = (char *) malloc((ft_strlen(source) + 1) * sizeof(char));
    while(i < (ft_strlen(source) + 1))
    {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
    return (destination);

}