/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 14:44:48 by jyim              #+#    #+#             */
/*   Updated: 2022/09/07 14:48:38 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char	*ft_strcat(char *dest, char *src)
{
	int	c;
	int	l;

	c = 0;
	l = ft_strlen(dest);
	while (src[c] != '\0')
	{
		dest[l] = src[c];
		c++;
		l++;
	}
	return (dest);
}

int	full_len(int size, char **strs, int size_sep)
{
	int	c;
	int	len;

	c = 0;
	len = 0;
	while (c < size)
	{
		len = len + size_sep + ft_strlen(strs[c]);
		c++;
	}
	return (len - 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		c_all;
	int		i;
	char	*strjoin;

	if (size == 0)
	{
		strjoin = (char *) malloc(1);
		return (strjoin);
	}
	c_all = full_len(size, strs, ft_strlen(sep));
	strjoin = (char *) malloc(sizeof(char) * c_all);
	i = 0;
	while (i < size)
	{	
		strjoin = ft_strcat(strjoin, strs[i]);
		if (i + 1 < size)
			strjoin = ft_strcat(strjoin, sep);
		i++;
	}
	return (strjoin);
}
