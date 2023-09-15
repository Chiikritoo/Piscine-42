/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchikri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:08:46 by anchikri          #+#    #+#             */
/*   Updated: 2023/09/13 02:44:49 by anchikri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (0);
	while (min < max)
		tab[i++] = min++;
	return (tab);
}
/*
int	main(void)
{
	int	min = -10;
	int	max = 50;
	int	i = 0;
	int	*tab = ft_range(min, max);
	while (min < max)
	{
		printf("%d\n", tab[i++]);
		min++;
	}

}*/
