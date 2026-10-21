#include <unistd.h>
#include <stdio.h>

void ft_putnbr(int n)
{
    if (n > 9)
        ft_putnbr(n / 10);
    write(1, &(char){(n % 10) + '0'}, 1);
}

int ft_atoi(const char *str)
{
    int res;
    size_t i;

    i = 0;
    res = 0;
    while(str[i])
    {
        if (str[i] < '0' || str[i] > '9')
            return (-1);
        res = (res * 10) + (str[i] - '0');
        i++;
    }
    return (res);
}

int is_prime(int n)
{
    int i;

    i = 2;
    if (n < 2)
        return (0);
    while (i * i <= n)
    {
        if (n % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int main(int argc, char **argv)
{
    int  i;
    int nbr;
    int res;
    
    nbr = 0;
    res = 0;
    if (argc == 2)
    {
        if (!argv)
            write(1, "0/n", 3);
        nbr = ft_atoi(argv[1]);
        i = 2;
        while (i <= nbr)
        {
            if (is_prime(i))
            {
                res += i;
            }
            i++;
        }
    }
        ft_putnbr(res);
        write(1, "\n", 1);
        return (0);
}