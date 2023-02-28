/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltian-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 10:04:23 by ltian-ha          #+#    #+#             */
/*   Updated: 2022/09/05 10:04:35 by ltian-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	num;

	num = 1;
	if (nb > 0)
	{
		while (num * num <= nb)
		{
			if (num * num == nb)
				return (num);
			else if (num >= 46341)
				return (0);
			num++;
		}
	}
	return (0);
}
