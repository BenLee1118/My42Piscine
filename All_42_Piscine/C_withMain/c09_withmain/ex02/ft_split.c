#include<stdio.h>
#include<stdlib.h>

int ft_seperator(char c, char *charset)
{
    int i;

    i = 0;
    while (charset[i] != '\0')
    {
        if (c == charset[i])
            return (1);
        i++;
    }
    return (0);
}

int ft_strl(char *str, char *charset)
{
    int num;
    int i;

    num = 0;
    i = 0;
    while (str[i] != '\0')
    {
        while (str[i] && ft_seperator(str[i], charset))
            i++;
        if (str[i] != '\0' && !ft_seperator(str[i], charset))
        {
            while (str[i] != '\0' && !ft_seperator(str[i], charset))
                i++;
            num++;
        }
    }
    return (num);
}

char    *ft_strdup(char *str, char *charset)
{
    char *letter;
    int index;

    index = 0;
    while (str[index] && !ft_seperator(str[index], charset))
        index++;
    letter = malloc(sizeof(char) * (index + 1));
    index = 0;
    while (str[index] != '\0' && !ft_seperator(str[index], charset))
    {
        letter[index] = str[index];
        index++;
    }
    letter[index] = '\0';
    return (letter);
}

char    **ft_split(char *str, char *charset)
{
    int index;
    char **tab;

    index = 0;
    tab = malloc(sizeof(char *) * (ft_strl(str, charset) + 1));
    while (*str)
    {
        while (*str && ft_seperator(*str, charset))
            str++;
        if (*str && !ft_seperator(*str, charset))
        {
            tab[index] = ft_strdup(str, charset);
            index++;
            while (*str && !ft_seperator(*str, charset))
                str++;
        }
    }
    tab[index] = 0;
    return (tab);
}

int		main()
{
	int		index;
	char	**split;

	//argc = argc + 0;
	//printf("count occ: %d\n", count_occur("  a  b   b   ", " a   "));
	split = ft_split("     g", "");
	//split = ft_split(argv[1], argv[2]);
	index = 0;
	printf("tab start\n");
	while (split[index])
	{
		printf("tab[%d]: $%s$\n", index, split[index]);
		//fflush(stdout);
		index++;
	}
	printf("tab end\n");
}