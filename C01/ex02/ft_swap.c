/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchikri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 10:15:20 by anchikri          #+#    #+#             */
/*   Updated: 2023/08/26 19:31:29 by anchikri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int	main() {
	int x = 5;
	int y = 10;

	printf("Avant swap : x = %d, y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("Après swap : x = %d, y = %d\n", x, y);
	return (0);
} */
