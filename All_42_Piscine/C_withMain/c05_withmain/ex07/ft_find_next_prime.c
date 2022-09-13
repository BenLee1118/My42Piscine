#include<stdio.h>

int		ft_is_prime(int nb)
{
	int num;

	num = 2;
	if (nb < 2)
		return (0);
	while (num <= nb / num)
	{
		if (nb % num == 0)
			return (0);
		num++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !ft_is_prime(nb))
		nb++;
	return (nb);
}

int main()
{
    printf("%d", ft_find_next_prime(4));
}