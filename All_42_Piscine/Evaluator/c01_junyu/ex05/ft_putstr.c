/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpu <jpu@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:27:00 by jpu               #+#    #+#             */
/*   Updated: 2022/08/30 19:46:37 by jpu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

// void	ft_putstr(char *str);

// int	main(void)
// {
// 	char str[] = "This is my string\n";
// 	char *dest = str;

// 	ft_putstr(dest);
// 	return (0);
// }

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		write(1, str + i, 1);
		i++;
	}
}
