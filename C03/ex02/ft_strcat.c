/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchikri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:46:07 by anchikri          #+#    #+#             */
/*   Updated: 2023/08/30 20:48:24 by anchikri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int main() {
    char destination[50] = "Hello";
    char source[] = ", world!";

    printf("Avant strcat: %s\n", destination);
    ft_strcat(destination, source);
    printf("Après strcat : %s\n", destination);

    return 0;
} */
