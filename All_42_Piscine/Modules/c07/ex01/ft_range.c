/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltian-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 10:22:37 by ltian-ha          #+#    #+#             */
/*   Updated: 2022/09/08 10:22:40 by ltian-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	index;
	int	*tab;

	if (min >= max)
		return (0);
	range = max - min - 1;
	tab = malloc(sizeof(int) * range);
	if (tab == NULL)
		return (0);
	index = 0;
	while (index <= range)
	{
		tab[index] = min + index;
		index++;
	}
	return (tab);
}
