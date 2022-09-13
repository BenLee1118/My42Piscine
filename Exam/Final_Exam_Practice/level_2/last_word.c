#include<unistd.h>

int    ft_strl(char *str1)
{
    int a;

    a = 0;
    while (str1[a] != '\0')
    {
        a++;
    }
    return (a);
}
void    last_word(char *str1)
{
    int i;

    i = ft_strl(str1) - 1;
    while (str1[i] == ' ' || str1[i] == '\t')
    i--;
    while (str1[i] != '\0' && str1[i] != ' ' && str1[i] != '\t')
    i--;
    i++;
    while (str1[i] != '\0' && str1[i] != ' ' && str1[i] != '\t')
    {
        write(1, &str1[i], 1);
        i++;
    }
}
int main(int ac, char **av)
{
    if (ac == 2)
    {
        last_word(av[1]);
    }
    write(1, "\n", 1);
    return (0);
}