/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 19:42:20 by jyim              #+#    #+#             */
/*   Updated: 2022/09/04 09:08:10 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	c;
	int	num;
	int	sign;

	sign = 1;
	c = 0;
	num = 0;
	while (str[c] == ' ' || str[c] == '\t' || str[c] == '\n'
		|| str[c] == '\v' || str[c] == '\r')
		c++;
	while (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			sign *= -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		num = num * 10 + (str[c] - '0');
		c++;
	}
	return (num * sign);
}
