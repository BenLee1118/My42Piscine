#include<unistd.h>

int main(int ac, char **av)
{
    int i;

    i = 0;
    if (ac > 1)
    {
        while (av[ac - 1][i] != '\0')
        {
            write(1, &av[ac - 1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}