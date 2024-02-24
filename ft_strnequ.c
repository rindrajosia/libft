int ft_strncmp(const char *first, const char *second, size_t n)
{
    size_t i;

    i = 0;
    if (n == i)
        return (0);
    while(first[i] == second[i] && first[i] != '\0' && i + 1 < n)
    {
        i++;
    }
    return (first[i] - second[i]);
}

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
    if (ft_strncmp(s1, s2, n) != 0)
        return (0);
    else
        return (1);
}
