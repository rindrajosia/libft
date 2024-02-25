#ifndef _LIBFT_H
# define _LIBFT_H

# define BUFF_SIZE 1
# include <string.h>
# include <stdlib.h>
# include <unistd.h>


int					ft_atoi(const char *str);
void				ft_bzero(void *str, size_t n);
int					ft_isalnum(int character);
int					ft_isalpha(int character);
int					ft_isascii(int c);
int					ft_isdigit(int character);
int					ft_isprint(int character);
char				*ft_itoa(int n);
void				*ft_memalloc(size_t size);
void				*ft_memccpy(void * destination, const void * source, int ch, size_t maxSize);
void				*ft_memchr(const void * memoryBlock, int searchedChar, size_t size);
int					ft_memcmp(const void * pointer1, const void * pointer2, size_t size);
void				*ft_memcpy(void * destination, const void * source, size_t size);
void				ft_memdel(void **ap);
void				ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memset(void *str, int c, size_t n);
void				ft_putchar_fd(char c, int fd);
void				ft_putchar(char c);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putendl(char const *s);
void				ft_putnbr_fd(int n, int fd);
void				ft_putnbr(int n);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putstr(char const *s);
char				*ft_strcat(char * destination, const char * source);
char				*ft_strchr(const char * string, int searchedChar);
void				ft_strclr(char *s);
int					ft_strcmp(const char * first, const char * second);
char				*ft_strcpy(char * destination, const char * source);
void				ft_strdel(char **as);
char				*ft_strdup(const char * source);
int					ft_strequ(char const *s1, char const *s2);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strjoin(char const *s1, char const *s2);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
size_t				ft_strlen(const char * theString);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strncat(char * destination, const char * source, size_t size);
int					ft_strncmp(const char *first, const char *second, size_t n);
char				*ft_strncpy(char *dst, const char *src, size_t len);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strnew(size_t size);
char				*ft_strnstr(const char * fullString, const char * substring, size_t len);
char				*ft_strrchr(const char * string, int searchedChar);
char				**ft_strsplit(char const *s, char c);
char				*ft_strstr(const char * fullString, const char * substring);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *s);
int					ft_tolower(int c);
int					ft_toupper(int c);
#endif
