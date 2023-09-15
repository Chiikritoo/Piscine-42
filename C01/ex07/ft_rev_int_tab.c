/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchikri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 22:06:46 by anchikri          #+#    #+#             */
/*   Updated: 2023/09/11 05:41:22 by anchikri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		tmp;

	i = 0;
	size--;
	while (i < size)
	{
		tmp = tab[i];
		tab[i] = tab[size];
		tab[size] = tmp;
		i++;
		size--;
	}
}

/*
#include <stdio.h>

int main() {
    int i = 0;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    int    size = 13;

    printf("Tableau original:\n");
    while (i < size)
        printf("%d ", arr[i++]);
    printf("\n");

    ft_rev_int_tab(arr, size);

    i = 0;
    printf("Tableau inversé:\n");
    while (i < size)
        printf("%d ", arr[i++]);
    printf("\n");

    return 0;
}*/
