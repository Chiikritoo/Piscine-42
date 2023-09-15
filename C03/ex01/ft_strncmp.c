/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchikri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 20:48:51 by anchikri          #+#    #+#             */
/*   Updated: 2023/08/31 11:06:43 by anchikri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}
/*
#include <stdio.h>

int main() {
    char *str1 = "Bonjour";
    char *str2 = "Bonzour";
    char *str3 = "Bonjour, monsieur";
    unsigned int n = 15;

    printf("%d\n", ft_strncmp(str1, str2, n));
    printf("%d\n", ft_strncmp(str1, str3, n));
    printf("%d\n", ft_strncmp(str2, str3, 9));

    return (0);
} */
