#include<stdio.h>

int		ft_sqrt(int nb)
{
	int	num;

	num = 1;
	if (nb > 0)
	{
		while (num * num <= nb)
		{
			if (num * num == nb)
				return (num);
			else if (num >= 46341)
				return (0);
			num++;
		}
	}
	return (0);
}

int main()
{
    printf("%d",ft_sqrt(17));
}