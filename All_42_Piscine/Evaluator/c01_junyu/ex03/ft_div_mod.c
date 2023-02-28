/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpu <jpu@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:15:31 by jpu               #+#    #+#             */
/*   Updated: 2022/08/25 16:53:45 by jpu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// void	ft_div_mod(int a, int b, int *div, int *mod);

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	*div;
// 	int	*mod;

// 	a = 185;
// 	b = 10;
// 	div = &a;
// 	mod = &b;

// 	printf("Value of a is: %d\n", a);
// 	printf("Value of b is: %d\n", b);

// 	ft_div_mod(a, b, div, mod);
// 	printf("Value of a/b is: %d\n", *div);
// 	printf("Remainder of a/b is: %d\n", *mod);
// 	return (0);
// }

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	result;
	int	remainder;

	result = a / b;
	remainder = a % b;
	*div = result;
	*mod = remainder;
}
