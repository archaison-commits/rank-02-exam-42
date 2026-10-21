#include <stdio.h>

int max(int *tab, unsigned int len)
{
    size_t  i;
    int max_n;

    i = 0;
    max_n = 0;
    if (!tab || len == 0)
        return (0);
    while (i <= len)
    {
        if (tab[i] > max_n)
            max_n = tab[i];
        i++;
    }
    return (max_n);
}

int main()
{
    int num[] = {12222222, 2, 44355, 3, 1, 499889};
    printf("max %d\n", max(num, 5));
    return (0);
}