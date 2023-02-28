/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 14:37:30 by jyim              #+#    #+#             */
/*   Updated: 2022/09/07 14:37:55 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *src)
{
	int		size;
	int		c;
	char	*srccpy;

	size = 0;
	while (src[size] != '\0')
		size++;
	srccpy = (char *)malloc(sizeof(char) * size);
	if (srccpy)
	{
		while (src[c] != '\0')
		{
			srccpy[c] = src[c];
			c++;
		}
		return (srccpy);
	}
	else
		return (0);
}
