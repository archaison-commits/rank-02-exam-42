#include <stdio.h>

char    *ft_strrev(char *str)
{
    char    tmp;
    int      i;
    int      j;
    
    i = 0;
    j = 0;
    while (str[i] != '\0')
        i++;
    i--;
    while (i - j >= 0)
    {
        tmp = str[j];
        str[j] = str[i];
        str[i] = tmp;
        i--;
        j++;
    }
    return (str);
}

int main(int argc,char **argv)
{
    if (argc != 2)
        return 1;
    // char    *str = "str";
    
    printf("answer %s\n", ft_strrev(*(argv+1)));
    return (0);
}