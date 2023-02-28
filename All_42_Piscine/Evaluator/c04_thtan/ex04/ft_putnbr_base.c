/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 23:21:47 by thtan             #+#    #+#             */
/*   Updated: 2022/09/04 18:41:12 by ltian-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	nbase(char *base)
{
	int	next;
	int	len;

	len = 0;
	next = 1;
	while (base[len] != '\0' && base[1] != '\0')
	{	
		if ((base[len] == 43) || (base[len] == 45))
			return (0);
		while (base[next] != '\0')
		{	
			if (base[len] == base[next])
				return (0);
			next++;
		}
		len++;
		next = len + 1;
	}
	return (len);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	b;

	b = nbase(base);
	if (b >= 2)
	{
		if (nbr == -2147483648)
		{	
			ft_putchar('-');
			ft_putnbr_base((2147483648 / b), base);
			ft_putnbr_base((2147483648 % b), base);
		}
		if ((nbr < 0) && nbr != (-2147483648))
		{		
			ft_putchar('-');
			nbr = -nbr;
		}
		if (nbr >= b)
		{	
			ft_putnbr_base((nbr / b), base);
			ft_putchar(base[nbr % b]);
		}
		else if ((0 <= nbr) && (nbr < b))
			ft_putchar(base[nbr]);
	}
}
int main()
{
	ft_putnbr_base(-12, "01");
    write(1, "\n", 1);
    ft_putnbr_base(-40, "01234567");
    write(1, "\n", 1);
    ft_putnbr_base(894867, "0123456789");
    write(1, "\n", 1);
    ft_putnbr_base(53, "0123456789abcdef");
	return (0);
}
