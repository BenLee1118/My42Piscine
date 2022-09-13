#include<unistd.h>
#include<stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s2[i] != 0)
    {
        s1[i] = s2[i];
        i++;
    }
    return (s1);
}

int main(void)
{
    char str1[100];
    char *str2 = "hello";
    char *str3;
    str3 = ft_strcpy(str1, str2);
    printf("%s", str1);
}