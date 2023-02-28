/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_check.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaryl <gdaryl@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 18:25:27 by gdaryl            #+#    #+#             */
/*   Updated: 2022/08/28 18:25:28 by gdaryl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRID_CHECK_H
#define GRID_CHECK_H

int	ft_check_duplicates(int	*row);

int	ft_check_sequence(int *row);

int	ft_check_col(int *grid, int col);

int	ft_check_row(int *grid, int row);

#endif
