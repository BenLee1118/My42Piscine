/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyap <wyap@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 21:54:06 by wyap              #+#    #+#             */
/*   Updated: 2022/08/21 20:21:07 by wyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_is_negative(int n)
{
	int	negative;
	int	positive;

	negative = 78;
	positive = 80;
	if (n >= 0)
		write(1, &positive, 1);
	else
		write(1, &negative, 1);
	return ;
}
