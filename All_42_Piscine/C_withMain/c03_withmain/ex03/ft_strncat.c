#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i;
    unsigned int j;
    
    i = 0;
    j = 0;
    while (dest[i] != '\0')
    {
        i++;
		
    }
    while (src[j] != '\0' && j < nb)
    {
        dest[i++] = src[j++];
    }
    dest[i] = '\0';
    return (dest);
}

int main()
{
    char src[100] = "tianhau1118 ";
    char dest[100] = "benlee";
    unsigned int nb = 4;
    ft_strncat(dest, src, nb);
    printf("%s",dest);

    return 0;
}
