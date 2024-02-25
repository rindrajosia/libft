#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    if (strnew == NULL)
        return (NULL);
    return (strnew);
}

char * ft_strcat( char * destination, const char * source ) {
    int len;
    int i;

    len = 0;
    i = 0;
    while (destination[len] != '\0')
	{
		len++;
	}
	while (source[i] != '\0')
	{
        destination[len] = source[i];
		i++;
        len++;
	}
    destination[len] = '\0';
    return destination;
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

char * ft_strcpy( char * destination, const char * source ) {
    int i;

    i = 0;
    while(source[i])
    {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
    return (destination);
}

char * ft_strjoin(char const *s1, char const *s2)
{
    char *new;

    new = ft_strnew(ft_strlen(s1) + 1 + ft_strlen(s2) + 1);
    if (new == NULL)
        return (NULL);
    ft_strcpy( new, s1 );
    ft_strcat( new, s2 );
    return (new);
}

int main() {

    char * firstName = (char *) malloc( 40 );
    char * lastName = (char *) malloc( 40 );
    char * fullName;
    size_t fullSize;
     printf( "Please, enter your first name: " );
    scanf( "%s", firstName );

    printf( "Enter your last name: " );
    scanf( "%s", lastName );
    /* The last +1 is for the last nul ASCII code for the string */
    fullSize = strlen( firstName ) + 1 +  strlen( lastName ) + 1;
       
    /* Memory allocation and copy */
    fullName = (char *) malloc( fullSize );
   
    fullName = ft_strjoin( firstName, lastName );
    /* You can also write :
    strcat( strcat( strcpy( fullName, firstName ), " " ), lastName );
    */
        
    printf( "Full name is: %s\n", fullName );
        
    free( fullName );
    free( lastName );
    free( firstName );
    
    return EXIT_SUCCESS;
}