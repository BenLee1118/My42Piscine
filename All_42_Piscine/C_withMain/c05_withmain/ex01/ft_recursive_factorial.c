#include<stdio.h>

int ft_recursive_factorial(int nb)
{
    if (nb < 0)
        return (0);
    else if (nb <= 1)
        return (1);
    else
    return (nb * ft_recursive_factorial(nb - 1));
}

int main()
{
    int a = -12;
    //ft_recursive_factorial(a);
    printf("%d", ft_recursive_factorial(a));
    return (0);
}