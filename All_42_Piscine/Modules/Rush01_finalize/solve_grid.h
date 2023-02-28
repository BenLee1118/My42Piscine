/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_grid.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaryl <gdaryl@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 18:28:17 by gdaryl            #+#    #+#             */
/*   Updated: 2022/08/28 18:28:18 by gdaryl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVE_GRID_H
#define SOLVE_GRID_H

int	ft_solve_grid(int row, int col, int **grid);

int	ft_change_value(int row, int col, int **grid);

int	ft_is_valid_candidate(int row, int col, int **grid);

#endif
