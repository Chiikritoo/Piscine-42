/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchikri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 10:27:33 by anchikri          #+#    #+#             */
/*   Updated: 2023/08/26 19:42:32 by anchikri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = c / *b;
	*b = c % *b;
}
/*
int main() {
    int a = 17;
    int b = 5;

    printf("Avant : a = %d, b = %d\n", a, b);
    ft_ultimate_div_mod(&a, &b);
    printf("Après : a = %d, b = %d\n", a, b);

    return 0;
} */
