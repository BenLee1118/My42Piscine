int	ft_args_valid(char *arg)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if ((arg[i] < '1' || arg[i] > '4') && arg[i] != ' ')
			return (0);
		if (i == 30 && !arg[i + 1])
		{
			i++;
			break ;
		}
		if ((arg[i] >= '1' && arg[i] <= '4') && arg[i + 1] != ' ')
			return (0);
		i++;
	}
	if (i == 31)
		return (1);
	else
		return (0);
	return (1);
}

int	ft_views_valid(int *view)
{
	int	i;

	i = 0;
	while (i < 12)
	{
		if (view[i] + view[i + 4] > 5 || view[i] + view[i + 4] < 3)
			return (0);
		if (i == 4)
			i = i + 3;
		i++;
	}
	return (1);
}

int	ft_debug(int *view, char *arg)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!ft_args_valid(arg))
		return (0);
	else
	{
		while (i < 31)
		{
			if (arg[i] != ' ')
			{
				view[j] = arg[i] - '0';
				j++;
			}
			i++;
		}
	}
	if (!ft_views_valid(view))
		return (0);
	return (1);
}
