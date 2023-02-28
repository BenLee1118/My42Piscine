#include <stdio.h>
int ft_btwalpha(char *str, int i)
{
    if (!(str[i] >= 'A' && str[i] <= 'Z'))
    {
        if (!(str[i] >= 'a' && str[i] <= 'z'))
        {
            if (!(str[i] >= '0' && str[i] <= '9'))
            {
                return (1);
            }
        }
    }
return (0);
}

char    *ft_strcapitalize(char *str)
{
    int i;
    int c;
    
    c = 1;
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        str[i] += 32;
        if (str[i] >= 'a' && str[i] <= 'z' && c == 1)
            str[i] -= 32;
        c = ft_btwalpha(str, i);
        i++;
    }
    return (str);
}
int main()
{
    char str[] = "sAlut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

    printf("      str: %s\n", str);
    ft_strcapitalize(str);
    printf("     changed: %s\n", str);
    return 0;
}
