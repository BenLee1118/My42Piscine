#include<unistd.h>
#include<stdio.h>

int ft_atoi(char *str)
{
    int i;
    int result;
    int sign;

    i = 0;
    result = 0;
    sign = 1;
    
    while (str[i] == ' ' || (str[i] >='\t' && str[i] <= '\r'))
    i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        sign *= -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        result *= 10;
        result += str[i] - '0';
        i++;
    }
    return (result * sign);
}

int main()
{
    int a;

    char    *str = "----+---1234a--bc567";
    a = ft_atoi(str);
    printf("%d", a);
}
