#include <stdio.h>
#include<string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int	i;
	unsigned int	run;

	run = 0;
    i = 0;
	while(src[run] != '\0')
	{
		run++;
	}
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
    dest[i] = '\0';
	}
    return (run);
}

int				main(void)
{
	char	string1[] = "asdasd";
	char	string2[20];
	int		i;
	int a;
 	
	printf("base   : %s\n", string1);
	i = ft_strlcpy(string2, string1, 2);
	printf("cpy c  : %s\n", string2);
	ft_strlcpy(string2, string1, 1);
	printf("cpy ft : %s\n", string2);
	a = strlcpy(string2, string1, 2);
	printf("%d",a);
	printf("%d", i);
}
