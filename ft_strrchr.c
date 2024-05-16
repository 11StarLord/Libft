#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    const char *last = NULL;

    while (*s != '\0')
    {
        if (*s == c)
            last = s;
        s++;  
    }
    if (c == '\0')
        return ((char *)s);
    return ((char *)last);
}