/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchikri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 22:22:08 by anchikri          #+#    #+#             */
/*   Updated: 2023/08/30 20:50:18 by anchikri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main() {
    char destination[50] = "Salut tout le";
    char source[] = " monde, ca va ?";
    printf("Avant strncat : %s\n", destination);
    ft_strncat(destination, source, 12);
    printf("Après strncat : %s\n", destination);

    return 0;
} */
