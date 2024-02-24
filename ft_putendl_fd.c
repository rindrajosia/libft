void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, sizeof(c));
}

void ft_putstr_fd(char const *s, int fd)
{
    int  count;

    count = 0;
    while(s[count])
        ft_putchar_fd(s[count++], fd);
}

void ft_putendl_fd(char const *s, int fd);
{
    ft_putstr_fd(s, fd);
    ft_putchar_fd('\n', fd);
}