/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char			ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c + 'A' - 'a');
	}
    else
    {
		return (c);
	}
}
size_t ft_strlen( const char * theString )
{
    size_t  count;

    count = 0;
    while(theString[count])
    {
        count++;
    }
    return (count);
}

void * ft_memalloc(size_t size)
{
    void *memory;
    size_t i;

    i = 0;
    if (!(memory = (unsigned char *) malloc (size * sizeof(unsigned char))))
        return (NULL);
    while(i < size)
        ((unsigned char *)memory)[i++] = '\0';
    return (memory);
}

char * ft_strnew(size_t size)
{
    char *strnew;

    strnew = (char *)ft_memalloc(size + 1);
    return (strnew);
}

char * ft_strmap(char const *s, char (*f)(char))
{
    char *new;
    size_t i;

    new = ft_strnew(ft_strlen(s));
    i = 0;
    while(s[i])
    {
        new[i] = f(s[i]);
        i++;
    }
    return (new);
}
int main() {
    
    /* Cherchons à dupliquer une chaîne de caractères en mémoire */
    char * original = "Chaine originale";

    original = ft_strmap(original, ft_toupper);
    printf("%s", original);

   

    return 0;
}