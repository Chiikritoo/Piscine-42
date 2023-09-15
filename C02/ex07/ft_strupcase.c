/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchikri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:57:43 by anchikri          #+#    #+#             */
/*   Updated: 2023/08/28 12:46:25 by anchikri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 64 && str[i] < 91)
		{
			i++;
		}
		else if (str[i] > 96 && str[i] < 123)
		{
			str[i] = str[i] - 32;
			i++;
		}
		else
		{
			i++;
		}
	}
	str[i] = '\0';
	return (str);
}
/*
int main()
{
    char source[] = "Salut, ca va ?";

    printf("Avant strupcase : %s\n", source);

    ft_strupcase(source);

    printf("Apres strupcase : %s\n", source);

    return 0;
} */
