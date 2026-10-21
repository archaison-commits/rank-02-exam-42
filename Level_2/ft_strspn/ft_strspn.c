#include <string.h>
#include <stdio.h>

size_t  ft_strspn(const char *s, const char *accept)
{
    size_t  len;
    size_t  i;
    size_t  j;

    len = 0;
    i = 0;
    if (!*s)
        return (len);
    while (s[i] != '\0')
    {
        j = 0;
        while (accept[j] != '\0')
        {
            if (accept[j] == s[i])
                break ;
            j++;
        }
        if (accept[j] == '\0')
            break ;
        i++;
        len++;
    }
    return (len);    
}

int main()
{
    printf("resultmy %lu\n", ft_strspn("", "help"));
    printf("resultor %lu\n", strspn("", "help"));
    return (0);
}