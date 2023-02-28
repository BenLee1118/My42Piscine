/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpu <jpu@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:11:30 by jpu               #+#    #+#             */
/*   Updated: 2022/08/30 19:58:19 by jpu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - i)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

/*
int	main(void)
{
	int	size;

	int numbers[5] = {1, 7, 3, 9, 6};
	int *num = numbers;
	size = 5;

	printf("these are the original arrays: %d, %d, %d, %d, %d\n", 
	numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);
	ft_sort_int_tab(num, size);
	printf("these are the new number: %d, %d, %d, %d, %d\n", 
	numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);
	return (0);
}
*/
