/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltian-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 10:36:57 by ltian-ha          #+#    #+#             */
/*   Updated: 2022/09/08 10:36:59 by ltian-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strl(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_full_strl(char **strings, int size, int length_seper)
{
	int	total_length;
	int	i;

	total_length = 0;
	i = 0;
	while (i < size)
	{
		total_length += ft_strl(strings[i]);
		total_length += length_seper;
		i++;
	}
	total_length -= length_seper;
	return (total_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		index;
	int		length_full;
	char	*tab;
	char	*sentence;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	length_full = ft_full_strl(strs, size, ft_strl(sep));
	sentence = (char *)malloc(sizeof(char) * (length_full + 1));
	if (!(sentence))
		return (0);
	tab = sentence;
	index = -1;
	while (index++ < size)
	{
		ft_strcpy(tab, strs[index]);
		tab += ft_strl(strs[index]);
		if (index < size -1)
		{
			ft_strcpy(tab, sep);
			tab += ft_strl(sep);
		}
	}
	*tab = '\0';
	return (sentence);
}
