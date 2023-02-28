
void	ft_putchar(char c);

void	print_horizontal(int x, char left, char middle, char right)
{
	if (x-- >= 1)
	{
		ft_putchar(left);
		while (x-- >= 2)
			ft_putchar(middle);
		if (x == 0)
			ft_putchar(right);
		ft_putchar('\n');
	}
}

void	print_vertical(int x, int y, char wall)
{
	int	i;

	while (y-- > 2)
	{
		ft_putchar(wall);
		i = 2;
		while (x > i++)
			ft_putchar(' '); 
		ft_putchar(wall);
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (y >= 1)
		print_horizontal(x, '/', '*', '\\');
	print_vertical(x, y, '*');
	if (y >= 2)
		print_horizontal(x, '\\', '*', '/');
}









































//jugjhbgjhbjhbvj
