int ft_atoi(const char *str)
{
    int i;
    int value;
    int signe;

    i = 0;
    value = 0;
    signe = 1;
    while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            signe = -1;
        i++;
    }
    if (str[i] == '-' || str[i] == '+')
        return (0);
    while (str[i] >= '0' && str[i] <= '9')
	{
        value = (value * 10) + ((int)str[i] - 48);
		i++;
	}

    return (value * signe);

}