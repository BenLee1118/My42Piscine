/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltian-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:58:21 by ltian-ha          #+#    #+#             */
/*   Updated: 2022/09/04 14:58:23 by ltian-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_solve(char *str, int i, int result, int sign)
{
	while (str[i] != '\0')
	{
		while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			i++;
		if (str[i] == '-')
		{
			sign *= -1;
			i++;
		}
		else if (str[i] == '+')
			i++;
		while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
		{
			result *= 10;
			result += str[i] - '0';
			i++;
		}
		if (!(str[i] >= '0' && str[i] <= '9') && str[i] != '-' && str[i] != '+')
			break ;
		i++;
	}
	return (result * sign);
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;
	int	ans;

	i = 0;
	result = 0;
	sign = 1;
	ans = ft_solve(str, i, result, sign);
	return (ans);
}
