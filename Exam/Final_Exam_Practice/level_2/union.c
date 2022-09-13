#include<unistd.h>

int check_double2(char *str, char c)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
        return (0);
        i++;
    }
    return (1);
}
int check_double(char *str, char c, int pos)
{
    int i;

    i = 0;
    while (i < pos)
    {
        if (str[i] == c)
        return (0);
        i++;
    }
    return (1);
}
void    ft_union(char *str1, char *str2)
{
    int i;
    int j;

    i = 0;
    while (str1[i] != '\0')
    {
        if (check_double(str1, str1[i], i) == 1)
            write(1, &str1[i], 1);
            i++;
    }
    j = 0;
    while (str2[j] != '\0')
    {
        if (check_double2(str1, str2[j]) == 1)
        {
            if (check_double(str2, str2[j], j) == 1)
            write(1, &str2[j], 1);
        }
        j++;
    }
}
int main(int ac, char **av)
{
    if (ac == 3)
    {
        ft_union(av[1], av[2]);
    }
    write(1, "\n", 1);
    return (0);
}