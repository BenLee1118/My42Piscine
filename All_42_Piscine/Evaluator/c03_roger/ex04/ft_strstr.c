/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliew <tliew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:12:11 by tliew             #+#    #+#             */
/*   Updated: 2022/09/01 18:48:00 by tliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;

	if (to_find[0] == '\0')
		return (str);
	a = 0;
	while (str[a] != '\0')
	{
		b = 0;
		while (to_find[b] != '\0')
		{
			if (str[a + b] == to_find[b])
			{
				b++;
			}
			else
				break ;
		}
		if (to_find[b] == '\0')
		{
			return (str + a);
		}
		a++;
	}
	return (0);
}
