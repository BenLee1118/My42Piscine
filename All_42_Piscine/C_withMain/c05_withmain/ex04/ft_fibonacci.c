#include<stdio.h>

int		ft_fibonacci(int index)
{
	int aux;

	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index > 1)
	{
		aux = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (aux);
	}
	else
		return (-1);
}
int main()
{
    printf("%d", ft_fibonacci(5));
}