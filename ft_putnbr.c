void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int n)
{
    long int nl;
    char digit[10];
    long int i;

    nl = (long)n;
    i = 0;
    if (nl == 0)
    {
        ft_putchar(nl);
        return ;
    }
    if (nl < 0)
    {
        nl *= -1;
        ft_putchar('-');
    }
    while (nl > 0)
	{
        digit[i] = (nl % 10) + 48;
        nl = nl / 10;
		i++;
	}
    while (i-- >= 0)
        ft_putchar(digit[i]);
}