/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpu <jpu@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:22:46 by jpu               #+#    #+#             */
/*   Updated: 2022/08/25 12:26:23 by jpu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// void	ft_ultimate_div_mod(int *a, int *b);

// int	main(void)
// {
// 	int	num1;
// 	int	num2;
// 	int *a;
// 	int *b;

// 	num1 = 185;
// 	num2 = 10;

// 	a = &num1;
// 	b = &num2;

// 	ft_ultimate_div_mod(a, b);
// 	printf("Division of a/b: %d\n", *a);
// 	printf("Remainder of a/b: %d\n", *b);
// 	return (0);
// }

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	num_a;
	int	num_b;
	int	result;

	num_a = *a;
	num_b = *b;
	result = num_a / num_b;
	*a = result;
	result = num_a % num_b;
	*b = result;
}
