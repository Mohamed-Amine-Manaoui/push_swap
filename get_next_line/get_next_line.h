#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

char    *get_next_line(int fd);
char    *ft_strchr(const char *str, int c);
char    *ft_strjoin(char *s1, char *s2);
int    ft_strlen(char *str);
char    *ft_strdup(char *src);
char    *ft_substr(char *s, unsigned int start, size_t len);
void	*ft_malloc(size_t size, char f_or_m);
#endif
