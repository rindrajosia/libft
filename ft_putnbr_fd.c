void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, sizeof(c));
}

void ft_putnbr_fd(int n, int fd)
{
    long int nl;
    char digit[10];
    long int i;

    nl = (long)n;
    i = 0;
    if (nl == 0)
    {
        ft_putchar_fd(nl, fd);
        return ;
    }
    if (nl < 0)
    {
        nl *= -1;
        ft_putchar_fd('-', fd);
    }
    while (nl > 0)
	{
        digit[i] = (nl % 10) + 48;
        nl = nl / 10;
		i++;
	}
    while (i-- >= 0)
        ft_putchar_fd(digit[i], fd);
}