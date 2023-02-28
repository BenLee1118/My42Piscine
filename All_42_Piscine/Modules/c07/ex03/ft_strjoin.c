/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltian-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 10:36:57 by ltian-ha          #+#    #+#             */
/*   Updated: 2022/09/08 12:16:24 by ltian-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		counter;
	int		i;
	int		j;

	str = (char *)malloc(sizeof(strs));
	if (!(str))
		return (NULL);
	counter = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			str[counter++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
			str[counter++] = sep[j++];
		i++;
	}
	str[counter] = '\0';
	return (str);
}
