/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchikri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:59:12 by anchikri          #+#    #+#             */
/*   Updated: 2023/08/28 18:36:46 by anchikri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] > 31 && str[i] < 127)
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
    char test1[] = "%d";
    char test2[] = "12de*0)";
    char test3[] = "abcdef";

    if (ft_str_is_printable(test1)) {
        printf("test1 : Oui\n");
    } else {
        printf("test1 : Non\n");
    }

    if (ft_str_is_printable(test2)) {
        printf("test2 : Oui\n");
    } else {
        printf("test2 : Non\n");
    }

    if (ft_str_is_printable(test3)) {
        printf("test3 : Oui\n");
    } else {
        printf("test3 : Non\n");
    }

    return 0;
} */
