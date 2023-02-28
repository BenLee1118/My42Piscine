/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtampubo <mtampubo@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 02:07:33 by mtampubo          #+#    #+#             */
/*   Updated: 2022/08/30 15:46:16 by mtampubo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(int a, int b, int c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_if(int a, int b, int c)
{
	if (a < b && b < c)
	{
		ft_write(a, b, c);
		write(1, ", ", 2);
	}
}

void	ft_function(int a, int b, int c)
{
	while (a < '7')
	{
		while (b < '8')
		{
			while (c < '9')
			{
				ft_if(a, b, c);
					++c;
			}
			ft_if(a, b, c);
			++b;
			c = b + 1;
		}
		ft_write(a, b, c);
	}
}

void	ft_print_comb(void)
{	
	int	a;
	int	b;
	int	c;

	a = '0';
	b = '1';
	c = '2';
	ft_function(a, b, c);
}
