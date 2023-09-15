/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchikri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:19:29 by anchikri          #+#    #+#             */
/*   Updated: 2023/08/28 12:43:37 by anchikri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] > 64 && str[i] < 91)
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
    char test1[] = "SALUTATOUs";
    char test2[] = "12345";
    char test3[] = "ABCDEF";

    if (ft_str_is_uppercase(test1)) {
        printf("test1 : Contient uniquement des majuscules\n");
    } else {
        printf("test1 : Ne contient pas uniquement des majuscules\n");
    }

    if (ft_str_is_uppercase(test2)) {
        printf("test2 : Contient uniquement des majuscules\n");
    } else {
        printf("test2 : Ne contient pas uniquement des majuscules\n");
    }

    if (ft_str_is_uppercase(test3)) {
        printf("test3 : Contient uniquement des majuscules\n");
    } else {
        printf("test3 : Ne contient pas uniquement des majuscules\n");
    }

    return 0;
} */
