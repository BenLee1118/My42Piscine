#include <stdio.h>
#include <string.h>

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

int				main(void)
{
	char	*str_base;
	char	dest[100];
	char	dest2[100];
	char	*src;
	int		index;

	str_base = "Hello";
	src = " World";
	index = 0;
	while (index < 6)
	{
		dest[index] = str_base[index];
		dest2[index] = str_base[index];
		index++;
	}
	printf("ft : (%d) $%s$\n", ft_strlcat(dest2, src, 9), dest2);
	printf("ft : (%lu) $%s$\n", strlcat(dest2, src, 9), dest2);
}
