/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaryl <gdaryl@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 18:25:04 by gdaryl            #+#    #+#             */
/*   Updated: 2022/08/28 18:39:07 by gdaryl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grid_check.h"
#include <stdio.h>
#include <unistd.h>

int	ft_check_duplicates(int *sequence)
{
	int	a;
	int	b;

	a = 1;
	b = 1;
	while (a < 5)
	{
		b = 1;
		while (b < 5)
		{
			if (a == b)
			{
				b++;
				continue ;
			}
			if ((sequence[a] == sequence[b]) && (sequence[a] != 0))
			{
				write(1, "Duplicate value...\n", 20);
				return (0);
			}
			b++;
		}
		a++;
	}
	return (1);
}

int	ft_check_sequence(int *sequence)
{
	int	i;
	int	bigger;
	int	highest_nbr;
	int	zero_cnt;

	i = 1;
	zero_cnt = 0;
	bigger = 0;
	highest_nbr = 0;
	if (!ft_check_duplicates(sequence))
		return (0);
	while (i < 5)
	{
		if (sequence[i] >= highest_nbr)
		{
			highest_nbr = sequence[i];
			bigger++;
		}
		i++;
	}
	i = 1;
	while (i < 5)
	{
		if (sequence[i] == 0)
			zero_cnt++;
		i++;
	}
	if (bigger == sequence[0] || zero_cnt > 0)
		return (1);
	else
		return (0);
}

int	ft_check_col(int *grid, int col)
{
	int	sequence[6];
	int	i;

	i = 0;
	while (i < 6)
	{
		sequence[5 - i] = grid[col + (6 * i)];
		i++;
	}
	if (ft_check_sequence(sequence) == 0)
		return (0);
	i = 0;
	while (i < 6)
	{
		sequence[i] = grid[col + (6 * i)];
		i++;
	}
	return (ft_check_sequence(sequence));
}

int	ft_check_row(int *grid, int row)
{
	int	sequence[6];
	int	i;

	i = 0;
	while (i < 6)
	{
		sequence[5 - i] = grid[(row * 6) + i];
		i++;
	}
	if (ft_check_sequence(sequence) == 0)
		return (0);
	i = 0;
	while (i < 6)
	{
		sequence[i] = grid[(row * 6) + i];
		i++;
	}
	return (ft_check_sequence(sequence));
}
