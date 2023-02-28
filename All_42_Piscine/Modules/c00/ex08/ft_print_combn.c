/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltian-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 08:57:24 by ltian-ha          #+#    #+#             */
/*   Updated: 2022/09/07 09:07:39 by ltian-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_comb(int *tab, int n)
{
	int	index;
	int	error;

	error = true;
	index = 0;
	while (++index < n)
		if (tab[index - 1] >= tab[index])
			error = false;
	if (!error)
		return ;
	index = -1;
	while (++index < n)
		ft_putchar(tab[index] + 48);
	if (tab[0] < (10 - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int n)
{
	int	index;
	int	tab[10];

	if (n < 0 || n > 10)
		return ;
	index = -1;
	while (++index < n)
		tab[index] = index;
	while (tab[0] <= (10 - n) && n >= 1)
	{
		ft_write_comb(tab, n);
		if (n == 10)
			break ;
		tab[n - 1]++;
		index = n;
		while (index !=  0 && n > 1)
		{
			index--;
			if (tab[index] > 9)
			{
				tab[index - 1]++;
				tab[index] = 0;
			}
		}
	}
}

int	main(void)
{
	ft_print_combn(3);
}
