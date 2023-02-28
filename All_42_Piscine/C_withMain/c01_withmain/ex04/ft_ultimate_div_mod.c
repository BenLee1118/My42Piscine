/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltian-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 18:11:26 by ltian-ha          #+#    #+#             */
/*   Updated: 2022/08/23 18:11:28 by ltian-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_ultimate_div_mod(int *a, int *b)
{
    int e;
    int f;

    e = *a / *b;
    f = *a % *b;
    *a = e;
    *b = f;
}

int main()
{
    int *a;
    int *b;
    int c;
    int d;

    a = &c;
    b = &d;
    c = 30;
    d = 5;
    ft_ultimate_div_mod(a, b);
}
