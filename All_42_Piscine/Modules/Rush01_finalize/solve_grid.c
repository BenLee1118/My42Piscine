/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaryl <gdaryl@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 18:31:33 by gdaryl            #+#    #+#             */
/*   Updated: 2022/08/28 18:48:38 by gdaryl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grid.h"
#include "grid_check.h"
#include "solve_grid.h"
#include <stdio.h>
#include <unistd.h>

int	ft_solve_grid(int row, int col, int **grid)
{
	if (col < 4 && (*grid)[row * 6 + col] > 0)
	{
		write(1, "Valid value, Skipping...\n", 25);
		return (ft_solve_grid(row, (col + 1), grid));
	}
	else if ((*grid)[row * 6 + col] > 0)
	{
		if (row == 4 && col == 4)
			return (1);
		col = 1;
		return (ft_solve_grid((row + 1), col, grid));
	}
	else
	{
		return (ft_change_value(row, col, grid));
	}
}

int	ft_change_value(int row, int col, int **grid)
{
	int	i;

	i = 1;
	while (i < 5)
	{
		(*grid)[row * 6 + col] = i;
		write(1, "Solving \n", 25);
		ft_print_grid(grid);
		if (ft_is_valid_candidate(row, col, grid))
		{
			if (row == 4 && col == 4)
				return (1);
			else if (col < 4)
			{
				if (ft_solve_grid(row, (col + 1), grid) == 1)
					return (1);
			}
			else
			{
				if (ft_solve_grid((row + 1), 1, grid) == 1)
					return (1);
			}
		}
		i++;
	}
	(*grid)[row * 6 + col] = 0;
	return (-1);
}

int	ft_is_valid_candidate(int row, int col, int **grid)
{
	if (ft_check_col(*grid, col) == 0)
	{
		return (0);
	}
	if (ft_check_row(*grid, row) == 0)
	{
		return (0);
	}
	return (1);
}
