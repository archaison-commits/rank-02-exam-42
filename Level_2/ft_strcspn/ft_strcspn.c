#include <string.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t  i;
    size_t  j;
    size_t  len;

    i = 0;
    j = 0;
    len = 0;
    while (s[i])
    {
        j = 0;
        while(reject[j] != '\0')
        {
            if(reject[j] == s[i])
                break ;
            j++;
        }
        if (reject[j] == s[i])
            break ;
        len++;
        i++;
    }
    return (len);
}

int main()
{
    printf("Mine %lu\n", ft_strcspn("1help", "help"));
    printf("Ori %lu\n", strcspn("1help", "help"));
}