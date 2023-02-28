#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;
    
    if (to_find[0] == '\0')
        return(str);
	j = 0;
    while (str[j] != '\0')
    {
		i = 0;
        while (to_find[i] != '\0')
        {
		   if (str[j + i] == to_find[i])
		   {
                i++;
		   }
		   else
			   break;
		}
		if (to_find[i] == '\0')
		{
			return (str + j);
		}
        j++;
    }
    return (0);
}

int main()
{
    char str[100] = "qwleoiuleeetheasdad ";
    char to_find[100] = "lee";
    char *b = ft_strstr(str, to_find);
    printf("%s",b);

    return 0;
}
