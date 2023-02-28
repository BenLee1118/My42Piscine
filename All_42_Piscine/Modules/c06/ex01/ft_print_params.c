/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltian-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:27:39 by ltian-ha          #+#    #+#             */
/*   Updated: 2022/09/05 15:27:40 by ltian-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	c;
	int	i;

	c = 1;
	while (c < argc)
	{
		i = 0;
		while (argv[c][i] != '\0')
		{
			ft_putchar(argv[c][i]);
			i++;
		}
		ft_putchar('\n');
		c++;
	}
	return (0);
}
