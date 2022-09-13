#include<unistd.h>
#include<stdio.h>

int ft_atoi(const char *str)
{
    int i;
    int result;
    int sign;

    i = 0;
    sign = 1;
    result = 0;
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
    i++;
    if (str[i] == '-')
    {
        sign *= -1;
        i++;
    }
    else if (str[i] == '+')
    i++;
    while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
    {
        result *= 10;
        result += str[i] - '0';
        i++;
    }
    return (result * sign);
}

int main(void)
{
    char *str1 = "   -1234abc567";
    printf("%d", ft_atoi(str1));
    return (0);
}