#include<stdio.h>
int    ft_strlen(char *str)
{
    int i;
    int a;

    i = 0;
    a = 0;
    while (*(str+i) != '\0')
    {
        a = a + 1;
        i++;
    }
    return (i);
}

int main()
{
    char str[] = "program";
    printf("length : %i\n", ft_strlen(str));
}
