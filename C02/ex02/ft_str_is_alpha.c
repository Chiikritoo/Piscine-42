/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchikri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 20:07:41 by anchikri          #+#    #+#             */
/*   Updated: 2023/08/28 12:34:34 by anchikri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123))
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

    if (ft_str_is_alpha(test1)) {
        printf("test1 : Oui\n");
    } else {
        printf("test1 : Non\n");
    }

    if (ft_str_is_alpha(test2)) {
        printf("test2 : Oui\n");
    } else {
        printf("test2 : Non\n");
    }

    if (ft_str_is_alpha(test3)) {
        printf("test3 : Oui\n");
    } else {
        printf("test3 : Non\n");
    }

    return 0;
} */
