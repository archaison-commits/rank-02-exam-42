#include <unistd.h>
#include <stdlib.h>

int *ft_range(int start, int end)
{
    int *res;
    int i;
    int len;

    i = 0;
    if (start <= end)
        len = end - start + 1;
    else
        len = end + start - 1;
    res = malloc(sizeof(int) + len);
    while (i < len)
    {
        if (start <= end)
            res[i] = start + i;
        else
            res[i] = end - i;
        i++;
    }
    return (res);
}

#include <stdio.h>

int main()
{
    int i;
    int *res;

    i = 0;
    res = ft_range(1, -3);
    while (i < 4)
    {
        printf(" [%d]", res[i++]);
    }
    return 0;
}