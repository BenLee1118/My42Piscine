/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltian-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 18:42:58 by ltian-ha          #+#    #+#             */
/*   Updated: 2022/09/03 13:40:01 by ltian-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strl(char *dest)
{
	unsigned int	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*src_start;
	char			*dst_end;
	unsigned int	dstl;
	unsigned int	left;

	src_start = src;
	dst_end = dest;
	left = size;
	while (left-- != 0 && *dst_end != '\0')
		dst_end++;
	dstl = dst_end - dest;
	left = size - dstl;
	if (left == 0)
		return (dstl + ft_strl(src));
	while (*src != '\0')
	{
		if (left > 1)
		{
			*dst_end++ = *src;
			left--;
		}
		src++;
	}
	*dst_end = '\0';
	return (dstl + (src - src_start));
}
