/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchikri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 11:23:19 by anchikri          #+#    #+#             */
/*   Updated: 2023/09/05 11:37:39 by anchikri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
		i *= nb--;
	return (i);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_factorial(6));
}*/
