#include <stdio.h>

int    ft_str_is_alpha(char *str)
{
    int i;
	int checking;
	
	checking = 1;	
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
        {
            checking = 0;
        }
        i++;
    }
    return(checking);
}

int main()
{
    char str[] = "98";
    int a;
    
    a = ft_str_is_alpha(str);
    printf("%d",a);
    
    return 0;
}
