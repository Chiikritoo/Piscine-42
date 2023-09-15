/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchikri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:20:03 by anchikri          #+#    #+#             */
/*   Updated: 2023/08/30 18:40:58 by anchikri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s2[i] == '\0')
		return (0);
	else
		return (-s2[i]);
}
/*
#include <stdio.h>

int main(void)
{
    char str1[] = "Hello";
    char str2[] = "hello";
    char str3[] = "world";
    char str4[] = "World";


    int result1 = ft_strcmp(str1, str2);
    int result2 = ft_strcmp(str1, str3);
    int result3 = ft_strcmp(str3, str4);

    printf("Difference entre str1 et str2 : %d\n", result1);
    printf("Difference entre str1 et str3 : %d\n", result2);
    printf("Difference entre str3 et str4 : %d\n", result3);
    return (0);
} */
