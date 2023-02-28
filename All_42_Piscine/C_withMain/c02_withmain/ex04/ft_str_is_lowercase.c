#include <stdio.h>

int    ft_str_is_lowercase(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] < 97)
        {
            return(0);
            break;
        }
        else if (str[i] > 122)
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
    char str[] = "Adsadd";
    int a;
    
    a = ft_str_is_lowercase(str);
    printf("%d",a);
    
    return 0;
}

