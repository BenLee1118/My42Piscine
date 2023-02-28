/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_prefill_values.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaryl <gdaryl@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 18:26:46 by gdaryl            #+#    #+#             */
/*   Updated: 2022/08/28 18:27:18 by gdaryl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set_prefill_values.h"

void	ft_set_colum(int row, int col, int **grid)
{
	if ((*grid)[row * 6 + col] == 4 && col == 0)
	{
		(*grid)[row * 6 + col + 1] = 1;
		(*grid)[row * 6 + col + 2] = 2;
		(*grid)[row * 6 + col + 3] = 3;
		(*grid)[row * 6 + col + 4] = 4;
	}
	else if ((*grid)[row * 6 + col] == 4 && col == 5)
	{
		(*grid)[row * 6 + col - 1] = 1;
		(*grid)[row * 6 + col - 2] = 2;
		(*grid)[row * 6 + col - 3] = 3;
		(*grid)[row * 6 + col - 4] = 4;
	}
}

void	ft_set_row(int row, int col, int **grid)
{
	if (row == 0 && (*grid)[row * 6 + col] == 4)
	{
		(*grid)[(row + 1) * 6 + col] = 1;
		(*grid)[(row + 2) * 6 + col] = 2;
		(*grid)[(row + 3) * 6 + col] = 3;
		(*grid)[(row + 4) * 6 + col] = 4;
	}
	else if (row == 5 && (*grid)[row * 6 + col] == 4)
	{
		(*grid)[(row - 1) * 6 + col] = 1;
		(*grid)[(row - 2) * 6 + col] = 2;
		(*grid)[(row - 3) * 6 + col] = 3;
		(*grid)[(row - 4) * 6 + col] = 4;
	}
}

void	ft_set_fours(int row, int col, int **grid)
{
	if ((*grid)[row * 6 + col] == 1 && col == 0)
		(*grid)[row * 6 + col + 1] = 4;
	else if ((*grid)[row * 6 + col] == 1 && col == 5)
		(*grid)[row * 6 + col - 1] = 4;
	else if (row == 0 && (*grid)[row * 6 + col] == 1)
		(*grid)[(row + 1) * 6 + col] = 4;
	else if (row == 5 && (*grid)[row * 6 + col] == 1)
		(*grid)[(row - 1) * 6 + col] = 4;
	else if ((*grid)[5 * 6 + col] == 3 && (*grid)[0 * 6 + col] == 2)
		(*grid)[2 * 6 + col] = 4;
	else if ((*grid)[5 * 6 + col] == 2 && (*grid)[0 * 6 + col] == 3)
		(*grid)[3 * 6 + col] = 4;
	else if ((*grid)[row * 6 + 0] == 3 && (*grid)[row * 6 + 5] == 2)
		(*grid)[row * 6 + 3] = 4;
	else if ((*grid)[row * 6 + 0] == 2 && (*grid)[row * 6 + 5] == 3)
		(*grid)[row * 6 + 2] = 4;
}

void	ft_set_threes(int row, int col, int **grid)
{
	if ((*grid)[5 * 6 + col] == 1 && (*grid)[0 * 6 + col] == 2)
		(*grid)[1 * 6 + col] = 3;
	else if ((*grid)[5 * 6 + col] == 2 && (*grid)[0 * 6 + col] == 1)
		(*grid)[4 * 6 + col] = 3;
	else if ((*grid)[row * 6 + 0] == 1 && (*grid)[row * 6 + 5] == 2)
		(*grid)[row * 6 + 4] = 3;
	else if ((*grid)[row * 6 + 0] == 2 && (*grid)[row * 6 + 5] == 1)
		(*grid)[row * 6 + 1] = 3;
}
