void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char const *s)
{
    int  count;

    count = 0;
    while(s[count])
        ft_putchar(s[count++]);
}