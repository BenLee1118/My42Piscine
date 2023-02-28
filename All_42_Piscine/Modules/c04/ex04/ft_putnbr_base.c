/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltian-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:14:05 by ltian-ha          #+#    #+#             */
/*   Updated: 2022/09/04 18:22:53 by ltian-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strl(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_check(char *str)
{
	int	i;
	int	j;
	int	a;

	a = ft_strl(str);
	i = 0;
	if (str[i] == '\0' || a == 1)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-' || str[i] <= 32 || str[i] == 127)
			return (0);
		j = i + 1;
		while (j < ft_strl(str))
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size;
	int		checking;
	long	num;

	num = nbr;
	checking = ft_check(base);
	size = ft_strl(base);
	if (checking == 1)
	{
		if (num < 0)
		{
			ft_putchar('-');
			num *= -1;
		}
		if (num < size)
		{
			ft_putchar(base[num]);
		}
		if (num >= size)
		{
			ft_putnbr_base(num / size, base);
			ft_putnbr_base(num % size, base);
		}
	}
}
