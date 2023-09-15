/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamouri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:16:11 by ylamouri          #+#    #+#             */
/*   Updated: 2023/09/14 16:39:05 by anchikri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

void	ft_show_tab(struct s_stock_str *par);

char	*ft_strdup(char *str)
{
	int		i;
	char	*dest;

	i = 0;
	while (str[i])
		i++;
	dest = malloc((i + 1) * sizeof(str));
	i = 0;
	if (dest == NULL)
		return (NULL);
	else
	{
		while (str[i])
		{
			dest[i] = str[i];
			i++;
		}
	dest[i] = '\0';
	}
	return (dest);
}

int	size_of_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

struct	s_stock_str	*ft_strs_to_tab(int argc, char **argv)
{
	int			i;
	t_stock_str	*struct_i;

	i = 0;
	struct_i = malloc(sizeof(t_stock_str) * (argc + 1));
	if (struct_i == NULL)
		return (NULL);
	while (i < argc)
	{
		struct_i[i].str = argv[i];
		struct_i[i].copy = ft_strdup(argv[i]);
		struct_i[i].size = size_of_str(argv[i]);
		i++;
	}
	struct_i[i].str = 0;
	return (struct_i);
}
