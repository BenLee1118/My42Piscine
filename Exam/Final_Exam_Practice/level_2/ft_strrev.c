#include<unistd.h>
#include<stdio.h>

char    *ft_strrev(char *str)
{
    int i;
    int j;
    char temp;

    j = 0;
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    i -= 1;
    while (i > j)
    {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        i--;
        j++;
    }
    return (str);
}

int main ()
{
    char str1[] = "lee tian hau";
    printf("%s", ft_strrev(str1));
}