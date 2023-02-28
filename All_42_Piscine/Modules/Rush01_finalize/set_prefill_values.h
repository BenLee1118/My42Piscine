/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_prefill_values.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaryl <gdaryl@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 18:31:43 by gdaryl            #+#    #+#             */
/*   Updated: 2022/08/28 18:31:44 by gdaryl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SET_PREFILL_VALUES_H
#define SET_PREFILL_VALUES_H

void	ft_set_colum(int row, int col, int **grid);

void	ft_set_row(int row, int col, int **grid);

void	ft_set_fours(int row, int col, int **grid);

void	ft_set_threes(int row, int col, int **grid);

#endif
