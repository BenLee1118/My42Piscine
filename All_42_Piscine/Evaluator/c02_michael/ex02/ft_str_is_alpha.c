/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng < mcheng@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 10:37:10 by mcheng            #+#    #+#             */
/*   Updated: 2022/09/05 10:14:07 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	alpha;
	int	c;

	alpha = 1;
	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] < 'A' || (str[c] > 'Z' && str[c] < 'a') || str[c] > 'z')
		{
			alpha = 0;
		}
		c++;
	}
	return (alpha);
}
