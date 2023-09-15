/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchikri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:06:56 by anchikri          #+#    #+#             */
/*   Updated: 2023/08/28 17:08:24 by anchikri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] > 47 && str[i] < 58)
	{
		i++;
	}
	if (str[i] == '\0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
int main() {
    char test1[] = "HelloW4orld";
    char test2[] = "12345";
    char test3[] = "AbCdEf";

    if (ft_str_is_numeric(test1)) {
        printf("test1 : Contient uniquement des chiffres\n");
    } else {
        printf("test1 : Contient des caractères alphabétiques\n");
    }

    if (ft_str_is_numeric(test2)) {
        printf("test2 : Contient uniquement des chiffres\n");
    } else {
        printf("test2 : Contient des caractères alphabétiques\n");
    }

    if (ft_str_is_numeric(test3)) {
        printf("test3 : Contient uniquement des chiffres\n");
    } else {
        printf("test3 : Contient des caractères alphabétiques\n");
    }

    return (0);
} */
