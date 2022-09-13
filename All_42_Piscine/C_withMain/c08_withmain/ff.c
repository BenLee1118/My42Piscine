#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

char	*copy_str(char *s, int size)
{
	char	*tab;
	int		i;

	tab = (char *)malloc((size + 1) * sizeof(char));
	if (tab == NULL)
		return (NULL);
	i = -1;
	while (s[++i])
		tab[i] = s[i];
	tab[i] = '\0';
	return (tab);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*t;
	int			i;
	int			j;

	t = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (t == NULL)
		return (t);
	i = -1;
	while (++i < ac)
	{
		j = 0;
		while (av[i][j])
			j++;
		t[i].size = j;
		t[i].str = av[i];
		t[i].copy = copy_str(av[i], j);
	}
	t[i].copy = 0;
	t[i].str = 0;
	return (t);
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