/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaryl <gdaryl@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 18:31:00 by gdaryl            #+#    #+#             */
/*   Updated: 2022/08/28 18:39:18 by gdaryl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grid.h"
#include "grid_check.h"
#include "solve_grid.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_check_input(int argc, char **argv, int **user_input)
{
	int	i;
	int	k;

	k = 0;
	i = 0;
	while (argc == 2 && argv[1][i] != '\0')
	{
		if (i % 2 == 0)
		{
			if (!(argv[1][i] >= '1' && argv[1][i] <= '4'))
				return (0);
			else
			{
				(*user_input)[k] = (int)(argv[1][i] - 48);
				k++;
			}
		}
		else if (argv[1][i] != ' ')
			return (0);
		i++;
	}
	if (i != 31 || argc != 2)
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	int	grid[36];
	int	user_input[16];
	int	*p_grid;
	int	*p_user_input;

	p_user_input = (int *)user_input;
	p_grid = (int *)grid;
	if (!ft_check_input(argc, argv, &p_user_input))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	ft_init_grid(&p_grid, &p_user_input);
	write(1, "Initializing\n", 14);
	ft_print_grid(&p_grid);
	ft_prefill_save_values(&p_grid);
	write(1, "Filled\n", 8);
	ft_print_grid(&p_grid);
	if (ft_solve_grid(1, 1, &p_grid) == 1)
	{
		write(1, "Completed Grid\n", 16);
		ft_print_grid(&p_grid);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
