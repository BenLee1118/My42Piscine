/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpu <jpu@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:58:30 by jpu               #+#    #+#             */
/*   Updated: 2022/08/30 19:58:34 by jpu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

/*
int	main(void)
{
	int size;

	int numbers[5] = {9, 7, 3, 4, 5};
	int *num = numbers;
	size = 5;

	printf("these are the original arrays: %d, %d, %d, %d, %d\n", 
	numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);
	ft_rev_int_tab(num, size);
	printf("these are the new number: %d, %d, %d, %d, %d\n", 
	numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);  
	return (0);
}
*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	*array;
	int	i;

	array = tab + size + 1;
	i = 0;
	while (i != size)
	{
		array[i] = 0;
		i++;
	}
	i = 0 ;
	while (i != size)
	{
		array[i] = *(tab + size - i - 1);
		i++;
	}
	i = 0;
	while (i != size)
	{
		tab[i] = *(array + i);
		i++;
	}
}
