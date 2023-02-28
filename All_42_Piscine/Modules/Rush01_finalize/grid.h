/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaryl <gdaryl@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 18:26:30 by gdaryl            #+#    #+#             */
/*   Updated: 2022/08/28 18:53:39 by gdaryl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRID_H
#define GRID_H

void	ft_print_grid(int **grid_p);

void	ft_init_grid(int **grid, int **user_input);

void	ft_prefill_save_values(int **grid);

#endif