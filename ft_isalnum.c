int ft_isalnum( int character )
{
    if(((unsigned char)character >= 'a' && (unsigned char)character <= 'z') ||
    ((unsigned char)character >= 'A' && (unsigned char)character <= 'Z') ||
    ((unsigned char)character >= '0' && (unsigned char)character <= '9'))
        return (1);
    else
        return (0);
}