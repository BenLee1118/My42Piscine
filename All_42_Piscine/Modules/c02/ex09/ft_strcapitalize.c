/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltian-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 22:25:25 by ltian-ha          #+#    #+#             */
/*   Updated: 2022/08/25 14:45:23 by ltian-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_btwalpha(char *str, int i)
{
	if (!(str[i] >= 'A' && str[i] <= 'Z'))
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			if (!(str[i] >= '0' && str[i] <= '9'))
			{
				return (1);
			}
		}
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	c;

	c = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z' && c == 1)
			str[i] -= 32;
		c = ft_btwalpha(str, i);
		i++;
	}
	return (str);
}
