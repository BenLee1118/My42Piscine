/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltian-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 10:26:26 by ltian-ha          #+#    #+#             */
/*   Updated: 2022/09/08 10:26:27 by ltian-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	index;
	int	*tab;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min - 1;
	tab = malloc(sizeof(int) * size);
	if (tab == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = tab;
	index = 0;
	while (index <= size)
	{
		tab[index] = min + index;
		index++;
	}
	return (size + 1);
}
