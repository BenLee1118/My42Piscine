#include <stdio.h>

int    ft_str_is_uppercase(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] < 65)
        {
            return(0);
            break;
        }
        else if (str[i] > 90)
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
    
    a = ft_str_is_uppercase(str);
    printf("%d",a);
    
    return 0;
}
