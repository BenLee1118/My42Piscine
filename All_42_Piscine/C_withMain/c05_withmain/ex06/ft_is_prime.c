#include<stdio.h>

int		ft_is_prime(int nb)
{
	int num;

	num = 2;
	if (nb < 2)
		return (0);
	while (num < nb)
	{
		if (nb % num == 0)
			return (0);
		num++;
	}
	return (1);
}

int main()
{
    printf("%d", ft_is_prime(7));
}