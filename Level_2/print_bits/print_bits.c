#include <unistd.h>

void	print_bits(unsigned char octet)
{
    unsigned char    res;
    int  i;

    i = 8;
    while (i-- > 0)
    {
        res = (octet >> i & 1) + '0';
        write(1, &res, 1);
    }
}

int main()
{
    print_bits(2);
}