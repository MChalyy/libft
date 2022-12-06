#include <stdlib.h>

void *ft_memset(void *str, int x, size_t n)
{
    int c;
    size_t i;
    unsigned char *manolo;

    manolo = (unsigned char *)str;
    i = n;
    c = 0;
    while(manolo[c] != '\0')
    {
        if(i != 0)
        {
            str[c] = a;
        }
        c++;
    }
    return (str);
}