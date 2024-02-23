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