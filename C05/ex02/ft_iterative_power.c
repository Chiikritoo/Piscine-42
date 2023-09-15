/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchikri <anchikri@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 20:36:19 by anchikri          #+#    #+#             */
/*   Updated: 2023/09/05 11:39:46 by anchikri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (nb == 1)
		return (1);
	while (power > 1)
	{
		i *= nb;
		power--;
	}
	return (i);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_power(8, 3));
}*/
