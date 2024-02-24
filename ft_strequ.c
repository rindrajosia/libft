int ft_strcmp( const char * first, const char * second )
{
    int i;

    i = 0;
    while(first[i] == second[i] && first[i] != '\0')
    {
        i++;
    }
    return (first[i] - second[i]);
}

int ft_strequ(char const *s1, char const *s2)
{
    if (ft_strcmp(s1, s2) != 0)
        return (0);
    else
        return (1);
}