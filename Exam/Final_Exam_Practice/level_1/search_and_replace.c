#include<unistd.h>

void    search_replace(char *str, char *a, char *b)
{
    int i;

    i = 0;
    if (a[1] != '\0' || b[1] != '\0')
    return ;
    while (str[i] != '\0')
    {
        if (str[i] == *a)
        {
            str[i] = *b;
        }
        write(1, &str[i], 1);
        i++;
    }
}
int main(int ac, char **av)
{
    if (ac == 4)
    {
        search_replace(av[1], av[2], av[3]);
    }
    write(1, "\n", 1);
    return (0);
}