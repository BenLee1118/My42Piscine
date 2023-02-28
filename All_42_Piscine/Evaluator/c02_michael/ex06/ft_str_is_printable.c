/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng < mcheng@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 10:59:29 by mcheng            #+#    #+#             */
/*   Updated: 2022/09/04 18:12:22 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	printable;
	int	count;

	printable = 1;
	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 32 || str[count] > 127)
		{
			printable = 0;
		}
		count++;
	}
	return (printable);
}
