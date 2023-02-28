/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 09:20:30 by jyim              #+#    #+#             */
/*   Updated: 2022/09/04 09:26:30 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_check_invalid(char *base)
{
	int		i;
	int		j;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] < 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	i_base(int nbr, int base, char *chars)
{
	if (nbr < base)
	{
		ft_putchar(chars[nbr % base]);
	}
	else
	{
		i_base(nbr / base, base, chars);
		ft_putchar(chars[nbr % base]);
	}
}

int	ft_atoi_base(char *str, char *base)
{
	int	c;
	int	num;
	int	sign;
	int	n_base;

	n_base = ft_strlen(str);
	if (ft_check_invalid(str) == 0)
		return (0);
	sign = 1;
	while (str[c] == ' ' || str[c] == '\t' || str[c] == '\v' || str[c] == '\r')
		c++;
	while (str[c] >= '0' && str[c] <= '9')
	{
		num = num * 10 + (str[c] - '0');
		c++;
	}
	i_base(num, n_base, base);
	return (num);
}
