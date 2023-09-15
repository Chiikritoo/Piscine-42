/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchikri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:19:08 by anchikri          #+#    #+#             */
/*   Updated: 2023/09/14 10:19:45 by anchikri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] > 96 && str[i] < 123)
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}
/*
int main() {
    char test1[] = "salutatouS";
    char test2[] = "12345";
    char test3[] = "abcdef";

    if (ft_str_is_lowercase(test1)) {
        printf("test1 : Contient uniquement des minuscules\n");
    } else {
        printf("test1 : Ne contient pas uniquement des minuscules\n");
    }

    if (ft_str_is_lowercase(test2)) {
        printf("test2 : Contient uniquement des minuscules\n");
    } else {
        printf("test2 : Ne contient pas uniquement des minuscules\n");
    }

    if (ft_str_is_lowercase(test3)) {
        printf("test3 : Contient uniquement des minuscules\n");
    } else {
        printf("test3 : Ne contient pas uniquement des minuscules\n");
    }

    return 0;
} */
