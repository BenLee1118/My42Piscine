/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltian-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:01:32 by ltian-ha          #+#    #+#             */
/*   Updated: 2022/08/24 17:02:12 by ltian-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 97)
		{
			return (0);
			break ;
		}
		else if (str[i] > 122)
		{
			return (0);
			break ;
		}
		i++;
	}
	return (1);
}
