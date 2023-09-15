/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchikri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 04:14:40 by anchikri          #+#    #+#             */
/*   Updated: 2023/09/10 10:32:48 by anchikri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[j] > tab[i])
			{
				temp = tab[j];
				tab[j] = tab[i];
				tab[i] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>

int main() {
    int i = 0;
    int arr[] = {3, 1, 8, 4, 5, 7, 2, 3, 6};
    int    size = 9;

    printf("Tableau original:\n");
    while (i < size)
        printf("%d ", arr[i++]);
    printf("\n");

    ft_sort_int_tab(arr, size);

    i = 0;
    printf("Tableau en ordre:\n");
    while (i < size)
        printf("%d ", arr[i++]);
    printf("\n");

    return 0;
}*/
