/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchikri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 10:26:06 by anchikri          #+#    #+#             */
/*   Updated: 2023/08/26 19:44:59 by anchikri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main() {
    int a = 17;
    int b = 5;
    int resultat_div = 0;
    int resultat_mod = 0;

    ft_div_mod(a, b, &resultat_div, &resultat_mod);

    printf("Division : %d / %d = %d\n", a, b, resultat_div);
    printf("Modulo : %d %% %d = %d\n", a, b, resultat_mod);

    return 0;
} */
