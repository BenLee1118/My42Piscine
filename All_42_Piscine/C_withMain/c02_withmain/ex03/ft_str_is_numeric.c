#include <stdio.h>

int    ft_str_is_numeric(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] < 48)
        {
            return(0);
            break;
        }
        else if (str[i] > 57)
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
    
    a = ft_str_is_numeric(str);
    printf("%d",a);
    
    return 0;
}
