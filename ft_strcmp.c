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