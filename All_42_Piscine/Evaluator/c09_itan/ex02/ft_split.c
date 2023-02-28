/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 14:29:48 by itan              #+#    #+#             */
/*   Updated: 2022/09/07 09:45:51 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_instr(char c, char *src)
{
	while (*src)
		if (c == *(src++))
			return (1);
	return (0);
}

int	num_of_words(char *str, char *charset)
{
	int	n_words;

	n_words = 0;
	while (*str)
	{
		while (*str && is_instr(*str, charset))
			str++;
		if (*str)
			n_words++;
		while (*str && !is_instr(*str, charset))
			str++;
	}
	return (n_words);
}

int	word_len(char *str, char *charset)
{
	int	len;

	len = 0;
	while (str[len] && !is_instr(str[len], charset))
		len++;
	return (len);
}

char	*create_string(char *str, char *charset)
{
	int		len;
	int		i;
	char	*dest;

	len = word_len(str, charset);
	dest = (char *)malloc((len + 1) * sizeof(char));
	i = -1;
	while (++i < len)
		dest[i] = str[i];
	dest[i] = 0;
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**dest;
	int		i;

	i = 0;
	dest = (char **)malloc((num_of_words(str, charset) + 1) * sizeof(char *));
	while (*str)
	{
		while (*str && is_instr(*str, charset))
			str++;
		if (*str != '\0')
			dest[i++] = create_string(str, charset);
		while (*str && !is_instr(*str, charset))
			str++;
	}
	dest[i] = 0;
	return (dest);
}

/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	int		index;
	char	**split;

	(void)argc;
	split = ft_split(argv[1], argv[2]);
	index = 0;
	while (split[index])
	{
		printf("%s\n", split[index]);
		index++;
	}
}
*/
