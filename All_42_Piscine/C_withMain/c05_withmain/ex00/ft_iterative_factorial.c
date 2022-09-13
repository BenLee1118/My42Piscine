#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int a;

    if (nb < 0)
    {
        return (0);
    }
    else if (nb <= 1)
    {
        return (1);
    }
    a = 1;
    while (nb > 0)
    {
        a *= nb;
        nb --;
    }

    return (a);
}

int main()
{
    int a = 0;
    int b = ft_iterative_factorial(a);
    printf("%d", b);
}