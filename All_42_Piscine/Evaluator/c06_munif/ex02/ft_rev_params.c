/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbin-fai <mbin-fai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 19:29:19 by mbin-fai          #+#    #+#             */
/*   Updated: 2022/09/01 19:30:58 by mbin-fai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	while ((argc - 1) > 0)
	{
		i = 0;
		while (argv[argc - 1][i] != '\0')
		{
			ft_putchar(argv[argc - 1][i]);
			i++;
		}
		argc--;
		ft_putchar('\n');
	}
	return (0);
}
