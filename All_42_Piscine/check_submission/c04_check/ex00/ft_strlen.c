/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltian-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:58:33 by ltian-ha          #+#    #+#             */
/*   Updated: 2022/08/25 15:58:35 by ltian-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (*(str + i) != '\0')
	{
		a = a + 1;
		i++;
	}
	return (i);
}
