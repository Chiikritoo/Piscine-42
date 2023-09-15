/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchikri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 20:10:14 by anchikri          #+#    #+#             */
/*   Updated: 2023/09/13 02:46:28 by anchikri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (-1);
	*range = tab;
	while (min < max)
		tab[i++] = min++;
	return (i);
}
/*
#include <stdio.h>

int main(void)
{
	int *range;
	int min = -5;
	int max = 5;
	int length = ft_ultimate_range(&range, min, max);

	if (length == -1)
	{
		printf("Erreur d'allocation mémoire!\n");
		return (1);
	}

	printf("Nombres entre %d et %d : \n", min, max);
	for (int i = 0; i < length; i++)
		printf("%d ", range[i]);
	printf("\n");

	free(range);  // Libération de la mémoire allouée pour le tableau
	return (0);
}*/
