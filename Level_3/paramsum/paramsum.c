#include <unistd.h>

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc == 0)
        return (0);
    while(argv[i])
        i++;
    i--;
    write(1, &(char){i + '0'}, 1);
    write(1, "\n", 1);
}