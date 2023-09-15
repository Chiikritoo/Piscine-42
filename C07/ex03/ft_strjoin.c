/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchikri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 20:27:57 by anchikri          #+#    #+#             */
/*   Updated: 2023/09/13 16:31:59 by anchikri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		j;
	int		i;
	int		k;

	tab = malloc(sizeof(strs));
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			tab[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i != size -1)
			tab[k++] = sep[j++];
		i++;
	}
	tab[k] = '\0';
	return (tab);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*strs[] = {"Salut", "a", "tous"};
	char	*sep = ", ";
	int		size = 3;

	char *result = ft_strjoin(size, strs, sep);

	if (result != NULL)
		printf("Chaine concatenée :\n%s\n", result);
	else
		printf("Error.\n");
	return (0);
}*/
