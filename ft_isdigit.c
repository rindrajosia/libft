int ft_isdigit( int character )
{
     if((unsigned char)character >= '0' && (unsigned char)character <= '9')
        return (1);
    else
        return (0);
}