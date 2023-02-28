/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpu <jpu@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:39:40 by jpu               #+#    #+#             */
/*   Updated: 2022/08/25 12:48:37 by jpu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// int	ft_strlen(char *str);

// int	main(void)
// {
// 	char str[] = "Count me";
// 	char *dest = str;

// 	int count = ft_strlen(dest);
// 	printf("This is the count: %d", count);
// 	return (0);
// }

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}
