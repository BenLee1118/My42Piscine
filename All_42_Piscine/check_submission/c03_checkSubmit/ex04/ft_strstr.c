/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltian-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 19:30:40 by ltian-ha          #+#    #+#             */
/*   Updated: 2022/08/31 13:06:15 by ltian-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	j = 0;
	while (str[j] != '\0')
	{
		i = 0;
		while (to_find[i] != '\0')
		{
			if (str[j + i] == to_find[i])
			{
				i++;
			}
			else
				break ;
		}
		if (to_find[i] == '\0')
		{
			return (str + j);
		}
		j++;
	}
	return (0);
}
