/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng < mcheng@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 11:42:46 by yWong             #+#    #+#             */
/*   Updated: 2022/09/05 10:33:50 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	to_uppercase(char *str, int i)
{
	if (str[i] >= '0' && str[i] <= '9')
		return (0);
	else if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
		return (1);
	return (0);
}	

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	change;

	i = 0;
	change = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z' && change == 0)
			str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z' && change == 1)
		{
			str[i] -= 32;
			change = 0;
		}	
		if (to_uppercase(str, i) == 1)
			change = 1;
		else
			change = 0;
	++i;
	}
	return (str);
}
