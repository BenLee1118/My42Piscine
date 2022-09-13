#include<unistd.h>

int main(int ac, char **av)
{
    int i;

    i = 0;
    if (ac == 2)
    {
        while (av[1][i] != '\0')
        {
            if (av[1][i] == 'z')
            {
                write(1, "z\n", 1);
                break ;
            }
            i++;
        }
        if (av[1][i] == '\0')
        {
            write(1, "z\n", 1);
        }
    }
    else
    write(1, "z\n", 1);
    return (0);
}