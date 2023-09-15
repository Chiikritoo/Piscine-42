/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchikri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:10:55 by anchikri          #+#    #+#             */
/*   Updated: 2023/08/31 13:32:27 by anchikri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while ((*str == '\t') || (*str == '\n') || (*str == '\v')
		|| (*str == '\f') || (*str == '\r') || (*str == ' '))
		str++;
	while ((*str == '+') || (*str == '-'))
	{
		if (*str == '-')
			b *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		a = (a * 10) + ((int) *str - '0');
		str++;
	}
	return (a * b);
}
/*
#include <stdio.h>

int	main(void)
{
	char	oui[] = "   ---+--+1234ab567";
	int	rep = ft_atoi(oui);
	printf("Resultat : %d", rep);
} */
