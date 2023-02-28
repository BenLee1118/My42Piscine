/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpu <jpu@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 00:35:46 by jpu               #+#    #+#             */
/*   Updated: 2022/08/25 00:35:46 by jpu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	*pa;
// 	int	*pb;

// 	a = 10;
// 	b = 100;
// 	pa = &a;
// 	pb = &b;
// 	ft_swap(pa, pb);
// 	printf("pa should be 42: %d\n", *pa); //10 to 100
// 	printf("pb should be 24: %d\n", *pb); //100 to 10
// }

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
