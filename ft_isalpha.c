#include "libft.h"

int ft_isalpha (int character)
{
    if(((unsigned char)character >= 'a' && (unsigned char)character <= 'z') ||
    ((unsigned char)character >= 'A' && (unsigned char)character <= 'Z'))
        return (1);
    else
        return (0);
}