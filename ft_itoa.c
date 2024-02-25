#include "libft.h"

static  void negatif(long int n, long int *nl)
{
    if (n < 0)
        *nl = (long)n * -1;
    else
        *nl = (long)n;
}

static  int count(long int nl, int n)
{
    int i;

    i = 0;
    while (nl > 0)
	{
        nl = nl / 10;
		i++;
	}
    if (n > 0)
        i--;
    return (i);
}

char * ft_itoa(int n)
{
    char *digit;
    long int nl;
    int i;

    negatif((long)n, &nl);
    if (nl == 0)
    {
        if (!(digit = ft_strnew(1)))
            return (NULL);
        digit[0] = 0 + 48;
        return (digit);
    }
    i = count(nl, n);
    if (!(digit = ft_strnew(i + 1)))
            return (NULL);
    while (nl > 0)
	{
        digit[i--] = (nl % 10) + 48;
        nl = nl / 10;
	}
	if (n < 0)
        digit[i] = '-';
	return (digit);
}