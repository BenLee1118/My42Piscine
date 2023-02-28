#include <stdio.h>

int    ft_str_is_printable(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] < 32)
        {
            return(0);
            break;
        }
        else if (str[i] > 127)
        {
            return(0);
            break;
        }
        i++;
    }
    return(1);
}

int main()
{
    char str[] = "";
    int a;
    
    a = ft_str_is_printable(str);
    printf("%d",a);
    
    return 0;
}

