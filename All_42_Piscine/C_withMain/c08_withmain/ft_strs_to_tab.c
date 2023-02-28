#include <stdlib.h>
#include "ft_stock_str.h"
#include <stdio.h>

int ft_strl(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char    *ft_strdup(char *src)
{
    char    *dest;
    int     i;

    dest = (char *)malloc(sizeof(char) * ft_strl(src) + 1);
    if (!dest)
        return (0);
    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    int index;
    t_stock_str *array;

    array = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
    if (array == NULL)
        return (array);
    index = 0;
    while (index < ac)
    {
        array[index].size = ft_strl(av[index]);
        array[index].str = av[index];
        array[index].copy = ft_strdup(av[index]);
        index++;
    }
    array[index].copy = 0;
    array[index].str = 0;
    return (array);
}

/*int	main(int argc, char **argv)
{
	int					index;
	struct s_stock_str	*structs;

	structs = ft_strs_to_tab(argc, argv);
	index = 0;
	while (index < argc)
	{
		printf("%d\n", index);
		printf("\t| original : $%s$ @ %p\n", structs[index].str, structs[index].str);
		printf("\t|   copied : $%s$ @ %p\n", structs[index].copy, structs[index].copy);
		printf("\t|     size : %d\n", structs[index].size);
		index++;
	}
}*/
