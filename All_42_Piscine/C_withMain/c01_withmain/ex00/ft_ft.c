/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltian-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 17:56:43 by ltian-ha          #+#    #+#             */
/*   Updated: 2022/08/23 17:56:45 by ltian-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_ft(int *nbr)
{
    *nbr = 42;
}

int main()
{
    int *nbr;
    int a;

    nbr = &a;
    ft_ft(nbr);
    return 0;
}
