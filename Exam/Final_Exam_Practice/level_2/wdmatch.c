#include<unistd.h>

int ft_strl(char *str1)
{
    int a;

    a = 0;
    while(str1[a] != '\0')
    {
        a++;
    }
    return (a);
}
void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}
void    wdmatch(char *str1, char *str2)
{
    int i;
    int j;
    int length;

    i = 0;
    j = 0; //remember str2[j] needs to be analyze continue
    length = 0;
    while (str1[i] != '\0')
    {
        while (str2[j] != '\0')
        {
            if (str1[i] == str2[j])
            {
                length++;
                break;
            }
            j++;
        }
        i++;
    }
    if (length == ft_strl(str1))
    {
        ft_putstr(str1);
    }
}
int main(int ac, char **av)
{
    if (ac == 3)
    {
        wdmatch(av[1], av[2]);
    }
    write(1, "\n", 1);
    return (0);
}