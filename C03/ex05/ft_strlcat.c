/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchikri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:38:11 by anchikri          #+#    #+#             */
/*   Updated: 2023/09/14 00:03:59 by anchikri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	lentotal;

	i = ft_strlen(dest);
	j = 0;
	lentotal = 0;
	lentotal += i + ft_strlen(src);
	if (size <= i)
		return (size + ft_strlen(src));
	while (src[j] && i + 1 < size)
		dest[i++] = src[j++];
	if (i < size)
		dest[i] = '\0';
	return (lentotal);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[] = "Salut";
	char	src[] = " a tous";
	unsigned int	result;

	result = ft_strlcat(dest, src, 1);
	printf("%s\n", dest);
	printf("%u\n", result);
	printf("%lu", strlcat(dest, src, 6));
}*/
