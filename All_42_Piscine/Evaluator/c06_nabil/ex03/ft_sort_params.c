/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmohd-fa <mmohd-fa@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 13:47:07 by mmohd-fa          #+#    #+#             */
/*   Updated: 2022/09/05 13:47:25 by mmohd-fa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>	

int	ft_strcmp(char *s1, char *s2)
{
	int		index;

	index = 0;
	while (s1[index] != '\0' && s1[index] == s2[index])
	{
		index++;
	}
	return (s1[index] - s2[index]);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_str_sort(char **arr, int size)
{
	int		i;
	int		j;

	i = 1;
	while (i < size)
	{
		j = 0;
		while (j < size - i + 1)
		{
			if (ft_strcmp(arr[i], arr[i + j]) > 0)
			{
				ft_swap(&arr[i], &arr[i + j]);
			}
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int		i;

	if (ac > 2)
		ft_str_sort(av, ac - 1);
	i = 0;
	while (++i < ac)
	{
		ft_putstr(av[i]);
		ft_putstr("\n");
	}
}
