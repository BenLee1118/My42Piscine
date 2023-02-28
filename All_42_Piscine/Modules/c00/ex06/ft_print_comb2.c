/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltian-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 08:34:19 by ltian-ha          #+#    #+#             */
/*   Updated: 2022/08/22 08:36:40 by ltian-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (i <= 98)
	{
		a = i + 1;
		while (a <= 99)
		{
			ft_putchar((i / 10) + '0');
			ft_putchar((i % 10) + '0');
			write(1, " ", 1);
			ft_putchar((a / 10) + '0');
			ft_putchar((a % 10) + '0');
			if (i != 98 || a != 99)
			{
				write(1, ", ", 2);
			}
			a++;
		}
		i++;
	}
}
