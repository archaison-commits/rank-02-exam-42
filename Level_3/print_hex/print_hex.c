#include <unistd.h>

void    ft_putchar(int c)
{
    write(1, &c, 1);
}

int mini_atoi(char *s)
{
    int i;
    int res;

    i = 0;
    res = 0;
    while(s[i])
    {
        res = (res * 10) + (s[i] - '0');
        i++;
    }
    return (res);
}

void    print_hex(int n)
{
    char *base;
        
    base = "0123456789abcdef";
    if (n > 15)
        print_hex(n / 16);
    ft_putchar(base[n % 16]);
}

int main(int argc, char **argv)
{
    int i;
    int n;
        
    i = 0;
    n = 0;
    if (argc == 2)
    {
        n = mini_atoi(argv[1]);
        print_hex(n);
    }
    return (0);
}