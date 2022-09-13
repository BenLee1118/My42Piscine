#include<unistd.h>
#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_strl(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}
char    *ft_strdup(char *src)
{
    char    *dest;
    int index;

    index = 0;
   if ((dest = (char *)malloc(ft_strl(src) * sizeof(char) + 1)) == NULL)
    return (0);
    while (src[index] != '\0')
    {
        dest[index] = src[index];
        index++;
    }
    dest[index] = '\0';
    return (dest);
}

int		main(void)
{
	char	*str;
	char	*allocated;

	str = "Hello World with malloc()";
	printf("x  : base  : $%s$ @ %p\n", str, str);
	allocated = strdup(str);
	printf("c  : alloc : $%s$ @ %p\n", allocated, allocated);
	allocated = ft_strdup(str);
	printf("ft : alloc : $%s$ @ %p\n", allocated, allocated);
}
