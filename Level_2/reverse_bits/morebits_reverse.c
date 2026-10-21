#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
    unsigned char   res;
    int i;

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
    octet = reverse_bits(2);
    while(i-- > 0)
    {
        res = (octet >> i & 1) + '0';
        write(1, &res, 1);
    }
}