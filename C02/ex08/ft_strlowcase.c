/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchikri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:54:14 by anchikri          #+#    #+#             */
/*   Updated: 2023/08/28 12:47:25 by anchikri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 96 && str[i] < 123)
		{
			i++;
		}
		else if (str[i] > 64 && str[i] < 91)
		{
			str[i] = str[i] + 32;
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
    char source[] = "SALUT, CA VA ?";

    printf("Avant strlowcase : %s\n", source);
    ft_strlowcase(source);

    printf("Apres strlowcase : %s\n", source);


    return 0;
} */
