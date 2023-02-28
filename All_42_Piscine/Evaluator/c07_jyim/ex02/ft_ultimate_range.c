/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 14:43:40 by jyim              #+#    #+#             */
/*   Updated: 2022/09/07 14:43:52 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	size = max - min;
	tab = (int *)malloc (sizeof(int) * size);
	if (tab == NULL)
		return (NULL);
	while (min < max)
	{
		tab[i++] = min++;
	}
	*range = tab;
	return (i);
}
