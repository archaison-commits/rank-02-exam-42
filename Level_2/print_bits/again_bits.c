#include <unistd.h>

char	print_bits(unsigned char octet)
{
    int i;
    char    res;

    i = 8;
    while(i-- > 0)
    {
        res = (res << 1) | (octet & 1);
        octet >>= 1; 
    }
    return (res);
}

int main()
{
    int i;
    char    octet;
    char    res;

    i = 8;
    octet = 2;
    while (i-- > 0)
    {
        res = (octet >> i & 1) + '0';
        write(1, &res, 1);
    }
    i = 8;
    write(1, "\n", 1);
    octet = print_bits(2);
    while (i-- > 0)
    {
        res = (octet >> i & 1) + '0';
        write(1, &res, 1);
    }
    
}