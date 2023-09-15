/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchikri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 22:44:41 by anchikri          #+#    #+#             */
/*   Updated: 2023/08/30 20:57:56 by anchikri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j])
			{
				j++;
				if (!to_find[j])
					return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int main() {
    char text[] = "Salut a tous, comment ca va ?";
    char search[] = "comment";

    char *result = ft_strstr(text, search);

    if (result != NULL) {
        printf("Sous-chaine trouvee : %s\n", result);
    } else {
        printf("Sous-chaine non trouvee \n");
    }

    return 0;
} */
