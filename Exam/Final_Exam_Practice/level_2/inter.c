#include<unistd.h>

int check_doubles(char *str1, char c, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (str1[i] == c)
        {
            return (0);
        }
        i++;
    }
    return (1);
}
void    inter(char *str1, char *str2)
{
    int i;
    int j;

    i = 0;
    while (str1[i] != '\0')
    {
        j = 0; //remember str2[j] needs to be analyze again
        while (str2[j] != '\0')
        {
            if (str1[i] == str2[j])
            {
                if (check_doubles(str1, str1[i], i) == 1)
                {
                    write(1, &str1[i], 1);
                    break;
                }
            }
            j++;
        }
        i++;
    }
}
int main(int ac, char **av)
{
    if (ac == 3)
    {
        inter(av[1], av[2]);
    }
    write(1, "\n", 1);
    return (0);
}